#include <iostream>
#include "../include/creational/simpleFactory.h"

int main(int, char**){
    auto door = DoorFactory::makeDoor(100, 200);

    std::cout << "Width: " << door->getWidth() << std::endl;
    std::cout << "Height: " << door->getHeight() << std::endl;

    return 0;
}
