#pragma once
#include <string>
#include "PaperGarbage.h"
#include "PlasticGarbage.h"


class Dustbin {
public:
	string color;
	PaperGarbage paperContent[10];
	PlasticGarbage plasticContent[10];
	Garbage houseWasteContent[10];
	void throwOutGarbage(Garbage);
	void throwOutPaperGarbage(PaperGarbage);
	void throwOutPlasicGarbage(PlasticGarbage);
};