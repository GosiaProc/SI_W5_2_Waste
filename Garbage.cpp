#include "Garbage.h"
#include <iostream>
#include "PlasticGarbage.h"
#include "PaperGarbage.h"
using namespace std;

Garbage::Garbage() //konstruktor
{
	name = "jakis smiec";
	std::cout << name;
};

DustbinContentError::DustbinContentError()
{
}
