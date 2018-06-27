#ifndef __CMDMANAGER__HH__
# define __CMDMANAGER__HH__

#include <map>

#include "Client.hh"
#include "ThreadPoolGenerator.hh"
#include "Instrument.hh"

#define BAD_REQUEST 0xC8
#define OK_REQUEST 0xC8

class CmdManager
{
public:
  CmdManager();
  ~CmdManager();
  void	parseMessage(char *buffer, Client &client, size_t bufferSize);
  void  disconnectClient(const Client & client);

private:
  void manageMusicParameter(int *buffer, Client &client, size_t bufferSize);
  void managePlayerCtrl(int *buffer, Client &client, size_t bufferSize);
  void manageDisconnection(int *buffer, Client &client, size_t bufferSize);
  void sendResponseMessage(const int responseCode, const Client & client, const std::string & message);
  void manageInstruments(const bool & add, const Client & client, const bool & arpeggios, const NbInstrument instruNb);
  std::map<int, std::function<void(int *buffer, Client &client, size_t bufferSize) > > _cmdFunctions;
  std::map<int, std::function<void(Client &client) > > _playerCtrlFunctions;

  ThreadPoolGenerator      _threadPool;
};

#endif /* __CMDMANAGER__HH__*/
