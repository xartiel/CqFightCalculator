// if (!_file.is_open())
//throw std::exception("Cannot open specifed config file");

#include "Config.h"

CConfig::CConfig(int argc, char **argv)
{
  // Set hardcoded default values:
  _fileName = "ConfigFile.ini";
  _minCost = 70000;
  _maxTotalCost = 0;

  // TODO: Load config from command line.
  readCliArgs(argc, argv);

  // Read the config file
  readConfFile();

}

CConfig::~CConfig()
{
}

void			CConfig::readCliArgs(int argc, char **argv)
{
  for (int i = 1; i < argc; ++i)
  {
	// --- Debug ---
	std::cout << "argv[" << i << "] = " << argv[i] << std::endl;
	// -------------
  }
}

bool			CConfig::readConfFile()
{
  _file.open(_fileName, std::fstream::in);
  if (_file.is_open())
  {
	// Read the file ...
  }
  return false;
}
