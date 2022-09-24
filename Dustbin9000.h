#pragma once
#include "Dustbin.h"
#include "MetalGarbage.h"
#include "BottleCap.h"
class Dustbin9000 :
    public Dustbin
{
public:
    std::vector<MetalGarbage*> metalContent;
    std::vector<BottleCap*> caps;
    void throwOutMetalGarbage(MetalGarbage*);
    void throwOutBottleCap(BottleCap*);


};

