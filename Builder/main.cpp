#include <iostream>
#include "./code/HouseBuilder.hh"
#include "./code/House.hh"
#include "./code/WoodHouseBuilder.hh"
#include "./code/LuxuryHouse.hh"
#include "./code/Director.hh"

int main(){
    WoodHouseBuilder woodHouseBuilder;
    LuxuryHouse luxuryHouseBuilder;

    Director director;

    director.build(&woodHouseBuilder);

    House* house = woodHouseBuilder.getHouse();

    house->showHouse();

    director.build(&luxuryHouseBuilder);

    house = luxuryHouseBuilder.getHouse();

    house->showHouse();

    LuxuryHouse luxuryHouseBuilder1;

    luxuryHouseBuilder1.setDoors();
    luxuryHouseBuilder1.setWalls();

    house = luxuryHouseBuilder1.getHouse();

    house->showHouse();

    delete house;

    return 0;
}