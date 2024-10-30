#include <iostream>
#include <memory>
#include "../include/creational/Prototype.h"

int main(int, char **)
{
    
    auto original = std::make_unique<Sheep>("Jolly");
    std::cout << "Original - Name: " << original->getName() << std::endl;
    std::cout << "Original - Category: " << original->getCategory() << std::endl;

    // 克隆并修改
    std::unique_ptr<Sheep> cloned(original->clone());
    cloned->setName("Dolly");
    std::cout << "\nCloned - Name: " << cloned->getName() << std::endl;
    std::cout << "Cloned - Category: " << cloned->getCategory() << std::endl;

    return 0;
    return 0;
}
