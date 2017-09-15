// CosmosQuest fights calculator.
// By Xartiel.
//
// Tools.DiffFiles

#include <iostream>
#include <vector>
#include <string>
#include "Config.h"

//	Plan:
//	. 
//	. Read Argv
//	  . Populate presented args, ignore the rest
//	. Read config
//	  . Populate presented args, put the rest to default
//	  . Read inputs
//	  . Get nbr ennemy lineup
//	  . Get max nbr of friend units
//	  . Get min cost of any friend unit
//	  . Get max cost of friend units
//	. Generate all possible lineups
//	. Start main loop
//	  {
//	  . Calculate the fight
//		. Calculate atk buff for left
//		. Calculate atk buff for right
//		. Calculate prot buff for left
//		. Calculate prot buff for right
//		. Calculate 1 hit from left
//		. Calculate 1 hit from right
//		. Calculate AOE from left
//		. Calculate AOE from right
//		. Calculate Heal for left
//		. Calculate Heal for right
//	  . Print result
//	  }
//	. 
void			mainWork(int argc, char **argv)
{
  CConfig		configManager(argc, argv);
}

int				main(int argc, char **argv)
{
  // Critical errors handling
  try { mainWork(argc, argv); }
  catch (std::exception &e)
  {
	std::cout << "Error: " << e.what() << std::endl;
	return (EXIT_FAILURE);
  }
  return (EXIT_SUCCESS);
}
