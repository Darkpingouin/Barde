/*
  ==============================================================================

    Player.cpp
    Created: 13 Mar 2017 1:44:54pm
    Author:  Anthony

  ==============================================================================
*/

#include "Player.hh"

Player::Player()
{
	_soundManager = new SoundManager();
	_generator = new MusicGenerator();
}

Player::~Player()
{
	_cond.notify();
	_stopQueue = true;
	_genThread.join();
	_playThread.join();
	delete _soundManager;
	delete _generator;
}

void Player::newParams(MusicParameters p)
{
	{
		std::cout << "--0" << std::endl;
		std::lock_guard<std::mutex> lock(_gen2playM);
		std::cout << "--1" << std::endl;
		_gen2playQ.clear();
	}
	std::cout << "--2" << std::endl;
	std::lock_guard<std::mutex> lock(_graph2genM);
	std::cout << "--3" << std::endl;
	_graph2genQ.push_back(p);
	std::cout << "--4" << std::endl;
	_cond.notify();
	std::cout << "--5" << std::endl;
}

void Player::Init()
{
	_stopQueue = false;
	_genThread = std::thread(&MusicGenerator::launch, _generator, std::ref(_graph2genQ), std::ref(_gen2playQ), std::ref(_graph2genM), std::ref(_gen2playM), std::ref(_stopQueue));
	_playThread = std::thread(&SoundManager::launch, static_cast<SoundManager *>(_soundManager), std::ref(_gen2playQ), std::ref(_gen2playM), std::ref(_stopQueue), std::ref(_cond));

#ifdef __linux__
	int policy;

	sched_param sch;
	pthread_getschedparam(_playThread.native_handle(), &policy, &sch);
	sch.sched_priority = -18;
	if (pthread_setschedparam(_playThread.native_handle(), SCHED_FIFO, &sch)) {
		std::cerr << "Failed to setschedparam: " << std::strerror(errno) << '\n';
	}
#else
	SetPriorityClass(_playThread.native_handle(), HIGH_PRIORITY_CLASS);
	SetThreadPriority(_playThread.native_handle(), THREAD_PRIORITY_HIGHEST);
#endif
}

void Player::Stop()
{
	_soundManager->stop();
}

void Player::Play(MusicParameters _musicParameters)
{

}
