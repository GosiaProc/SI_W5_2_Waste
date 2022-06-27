#include <iostream>
#include "Garbage.h"
#include "PaperGarbage.h"
#include "PlasticGarbage.h"
using namespace std;

int main() {

	Garbage smiec;
	PaperGarbage newspaper;
	newspaper.squeeze();
	PlasticGarbage plasticBottle;
	plasticBottle.clean();

}