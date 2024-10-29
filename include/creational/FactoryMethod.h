#pragma once

#include <iostream>


//Abstract Product
//As an example, it could be shoes
//then each specific product could be a brand of shoes
class Shoe
{
public:
    virtual void sell() = 0;
};

//Concrete Product 1: Nike shoes
class NikeShoes : public Shoe
{
public:
    void sell() override
    {
        std::cout << "sell nike shoes" << std::endl;
    }
};

//Concrete Product 1: Adidas shoes
class AdidasShoes : public Shoe
{
public:
    void sell() override
    {
        std::cout << "sell adidas shoes" << std::endl;
    }
};

//Abstract Factory
//Based on the shoe example, it could be a shoe factory base class
//then the specific shoe factories would be each brand's own shoe factory
class shoeFactory
{
public:
    void sellShoes()
    {
        auto shoes = this->makeShoes();
        shoes->sell();
    }
protected:
    virtual Shoe* makeShoes() = 0;
};

class Nike : public shoeFactory
{
protected:
    Shoe * makeShoes() override
    {
        return new NikeShoes();
    }
};

class Adidas : public shoeFactory
{
protected:
    Shoe * makeShoes() override
    {
        return new AdidasShoes();
    }
};