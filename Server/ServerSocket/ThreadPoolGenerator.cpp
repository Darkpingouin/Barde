/*
  ==============================================================================

    ThreadPool.cpp
    Created: 21 Jun 2018 12:56:47pm
    Author:  anthony

  ==============================================================================
*/

#include "ThreadPoolGenerator.hh"

ThreadPoolGenerator::ThreadPoolGenerator()
{

}

ThreadPoolGenerator::~ThreadPoolGenerator()
{

}

void ThreadPoolGenerator::init()
{
  _generatorThread = std::thread(&ThreadPoolGenerator::generationManager, this);
}

void ThreadPoolGenerator::addClient(const Client & client)
{
  _clientsMutex.lock();
  _clients.push_back(client);
  _clientsMutex.unlock();
}

void ThreadPoolGenerator::removeClient(const Client & client)
{
  _clientsMutex.lock();
  _clients.remove(client);
  _clientsMutex.unlock();
}

void ThreadPoolGenerator::generationManager()
{
  std::list<Client>::iterator it;
  std::list<Client>           clients;
  Midi midiData;

  while (42)
  {
      _clientsMutex.lock();
      clients = _clients; //This may be improved !!
      _clientsMutex.unlock();

      if (clients.size() > 0)
      {
        for (it = clients.begin(); it != clients.end(); ++it)
        {
          midiData = _musicGenerator.createMusic(it->getMp());
          send(it->getFd(), midiData.getMidiArray(), midiData.getMidiSize(), MSG_NOSIGNAL);
        }
      }
      else
      {
        //Need to do a pause
      }
  }
}
