#include "PaperGarbage.h"
#include <iostream>

bool PaperGarbage::squeeze()
{
	isSqueeze = true;
	std::cout << "SQUEEZE \n";
	return true;
}
