#ifndef HOUSE__HH
#define HOUSE__HH

#include <iostream>
#include <string>

class House
{
private:
    std::string walls;
    std::string roof;
    std::string doors;
    std::string windows;
public:
    House();
    House(std::string walls, std::string roof, std::string doors, std::string windows);
    void setWalls(std::string walls);
    void setRoof(std::string roof);
    void setDoors(std::string doprs);
    void setWindows(std::string windows);

    void showHouse() const;
};

#endif