#include "Dustbin9000.h"
#include "BottleCapException.h"

void Dustbin9000::throwOutMetalGarbage(MetalGarbage*mg)
{
	metalContent.push_back(mg);
}

void Dustbin9000::throwOutBottleCap(BottleCap*cap)
{
	if (cap->color == "pink") {
		caps.push_back(cap);
	}
	else
		throw BottleCapException();
}
