#include "Dustbin.h"
#include <iostream>

int i = 0;
void Dustbin::throwOutGarbage(Garbage smiec)
{
	houseWasteContent[0] = smiec;
	}

void Dustbin::throwOutPaperGarbage(PaperGarbage pg) {
	if(pg.isSqueeze)
	paperContent[0] = pg;
}
	
void Dustbin::throwOutPlasicGarbage(PlasticGarbage pl)
{
	if (pl.isClean == 1)
		plasticContent[0] = pl;
}

