#ifndef WOODHOUSEBUILDER__HH
#define WOODHOUSEBUILDER__HH

#include "HouseBuilder.hh"

class WoodHouseBuilder : public HouseBuilder
{
private:
    /* data */
    House* house;
public:
    WoodHouseBuilder();
    void setWalls() override;
    void setRoof() override;
    void setDoors() override;
    void setWindows() override;
    House* getHouse() override;
};

#endif