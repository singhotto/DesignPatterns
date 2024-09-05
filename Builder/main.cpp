#include <iostream>
#include "./code/HouseBuilder.hh"
#include "./code/House.hh"
#include "./code/WoodHouseBuilder.hh"

int main(){
    HouseBuilder* builder = new WoodHouseBuilder();

    builder->setDoors();

    House* house = builder->getHouse();

    house->showHouse();

    delete builder;
    delete house;

    return 0;
}