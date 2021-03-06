#ifndef _CONNECTION_HH_
# define _CONNECTION_HH_

#include <ctime>
#include <iostream>
#include <string>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>
#include "AI/MusicGenerator.hh"
#include <boost/asio.hpp>
#include <boost/asio/thread_pool.hpp>

using boost::asio::ip::tcp;

class Connection : public boost::enable_shared_from_this<Connection>
{
public:
  typedef boost::shared_ptr<Connection> pointer;
  static pointer create(boost::asio::io_service& io_service, boost::asio::thread_pool *genPool, boost::asio::thread_pool *playPool);
  tcp::socket& getSocket();
  void start();

private:
  Connection(boost::asio::io_service& io_service, boost::asio::thread_pool *genPool, boost::asio::thread_pool *playPool);
  void handle_write(const boost::system::error_code& error);
  void handle_receive(const boost::system::error_code& error);
  std::string make_daytime_string() const;

  tcp::socket _socket;
  std::string _message;
  boost::asio::streambuf _buffer;
  boost::asio::thread_pool *_genPool;
  boost::asio::thread_pool *_playPool;

};

#endif //_CONNECTION_HH_
