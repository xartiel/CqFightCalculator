#ifndef CONFIG_H_
# define CONFIG_H_

#include <iostream>
#include <string>
#include <fstream>

class				CConfig
{
  public:
  CConfig(int argc, char **argv);
  ~CConfig();

  private:
  void				readCliArgs(int argc, char **argv);
  bool				readConfFile();

  private:
  std::string		_fileName;
  std::fstream		_file;
  unsigned int		_minCost;
  unsigned int		_maxTotalCost;

};

#endif
