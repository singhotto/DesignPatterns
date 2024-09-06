#ifndef LUXURYHOUSE__HH
#define LUXURYHOUSE__HH

#include "HouseBuilder.hh"
#include "House.hh"

class LuxuryHouse : public HouseBuilder
{
private:
    House* house;
public:
    LuxuryHouse();
    void setWalls() override;
    void setRoof() override;
    void setDoors() override;
    void setWindows() override;
    House* getHouse() override;
};

#endif