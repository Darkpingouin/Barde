/*
  ==============================================================================

    JuceSound.cpp
    Created: 13 Mar 2017 1:42:58pm
    Author:  Anthony

  ==============================================================================
*/

#include "JuceSound.hh"

SoundManager::SoundManager()
{
	
	_midiOutput = MidiOutput::openDevice(0);
}

SoundManager::~SoundManager()
{

}

bool					SoundManager::play(std::string)
{
	MidiMessage			tmp;

	MidiMessageSequence	_midiSequence;
	double				temps = (1.0 / (80.0 / 60.0)) * 1000;

	for (int i = 0; i<_midiSequence.getNumEvents(); i++)
	{
		tmp = _midiSequence.getEventPointer(i)->message;

		if (tmp.isNoteOn())
		{
			_midiOutput->sendMessageNow((const MidiMessage &)tmp);
			
			std::cout << "temps = " << temps << std::endl;
			Sleep(temps);
		}
	}

	return true;

}

bool					SoundManager::stop(std::string)
{
	return true;
}

bool					SoundManager::pause(std::string)
{
	return true;
}

bool					SoundManager::setVolume(const int volume)
{
	return true;
}

bool					SoundManager::stopAll()
{
	return true;
}