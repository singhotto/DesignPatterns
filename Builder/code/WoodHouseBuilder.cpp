#include "WoodHouseBuilder.hh"
#include "House.hh"

WoodHouseBuilder::WoodHouseBuilder() : house(new House())
{
}

void WoodHouseBuilder::setWalls()
{
    this->house->setWalls("wood walls");
}

void WoodHouseBuilder::setRoof()
{
    house->setRoof("wood roof");
}

void WoodHouseBuilder::setDoors()
{
    this->house->setDoors("wood doors");
}

void WoodHouseBuilder::setWindows()
{
    this->house->setWindows("wood windows");
}

House *WoodHouseBuilder::getHouse()
{
    return this->house;
}
