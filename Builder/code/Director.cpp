#include "Director.hh"

void Director::build(HouseBuilder *builder)
{
    builder->setDoors();
    builder->setRoof();
    builder->setWalls();
    builder->setWindows();
}