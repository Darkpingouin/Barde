#include "Server.hh"

int	main(int argc, char *argv[])
{
  if (argc != 2)
    {
      std::cout << "please write port : ./Server [port]\n exemple : ./Server 8080" << std::endl;
      return (1);
    }
  else
    {
       Server s;

      s.setPort(atoi(argv[1]));
      if ((s.runServer()) == 1)
	return (1);
    }
  return (0); 
}
