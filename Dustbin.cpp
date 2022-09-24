#include "Dustbin.h"
#include <iostream>


void Dustbin::throwOutGarbage(Garbage* smiec)
{
	houseWasteContent.push_back(smiec);
}

void Dustbin::throwOutPaperGarbage(PaperGarbage* pg) {
	if (pg->isSqueeze)
		paperContent.push_back(pg);
	else
		throw DustbinContentError();
}
	
void Dustbin::throwOutPlasicGarbage(PlasticGarbage* pl)
{
	if (pl->isClean == 1)
		plasticContent.push_back(pl);
	else
		throw DustbinContentError();
}

void Dustbin::emptyContents()
{
	paperContent.clear();
	plasticContent.clear();
	houseWasteContent.clear();
}

