#pragma once
#include <string>
#include "PaperGarbage.h"
#include "PlasticGarbage.h"
#include <vector>


class Dustbin {
public:
	string color;
	std::vector<PaperGarbage*> paperContent;
	std::vector<PlasticGarbage*> plasticContent;
	std::vector<Garbage*> houseWasteContent;
	void throwOutGarbage(Garbage*);
	void throwOutPaperGarbage(PaperGarbage*);
	void throwOutPlasicGarbage(PlasticGarbage*);
	void emptyContents();
};