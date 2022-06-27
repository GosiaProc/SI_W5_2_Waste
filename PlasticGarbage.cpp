#include "PlasticGarbage.h"
#include <iostream>


bool PlasticGarbage::clean()
{
	isClean = true;
	std::cout << "CLEAN \n";
	return true;
}