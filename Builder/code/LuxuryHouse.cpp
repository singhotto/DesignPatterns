#include "LuxuryHouse.hh"

LuxuryHouse::LuxuryHouse() : house(new House())
{
}

void LuxuryHouse::setWalls()
{
    this->house->setWalls("Luxury Walls");
}

void LuxuryHouse::setRoof()
{
    house->setRoof("Luxury roof");
}

void LuxuryHouse::setDoors()
{
    this->house->setDoors("Luxury doors");
}

void LuxuryHouse::setWindows()
{
    this->house->setWindows("Luxury windows");
}

House *LuxuryHouse::getHouse()
{
    return this->house;
}