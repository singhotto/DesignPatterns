#ifndef HOUSEBUILDER__HH
#define HOUSEBUILDER__HH

#include "House.hh"
#include <string>

class HouseBuilder
{
public:
    virtual ~HouseBuilder(){};
    virtual void setWalls() = 0;
    virtual void setRoof() = 0;
    virtual void setDoors() = 0;
    virtual void setWindows() = 0;
    virtual House* getHouse() = 0;
};


#endif