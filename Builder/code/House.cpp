#include "House.hh"

House::House()
{
}

void House::setWalls(std::string walls)
{
    this->walls = walls;
}

void House::setRoof(std::string roof)
{
    this->roof = roof;
}

void House::setDoors(std::string doors)
{
    this->doors = doors;
}

void House::setWindows(std::string windows)
{
    this->windows = windows;
}

void House::showHouse() const
{
    std::cout << "House with:\n"
              << "Walls: " << walls << "\n"
              << "Roof: " << roof << "\n"
              << "Doors: " << doors << "\n"
              << "Windows: " << windows << "\n";
}
