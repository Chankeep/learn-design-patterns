/*
 * The builder pattern is an object creation software design pattern 
 * with the intentions of finding a solution to the telescoping constructor anti-pattern.
 */

#pragma once

#include <memory>

class BurgerBuilder; // 前向声明

class Burger
{
    friend class BurgerBuilder; // 声明 BurgerBuilder 为友元类
public:
    Burger(BurgerBuilder *builder);

protected:
    float size{0.0f};
    bool cheese{false};
    bool pepperoni{false};
    bool lettuce{false};
    bool tomato{false};
};

class BurgerBuilder
{
public:
    BurgerBuilder(float size) : size(size),
                                cheese(false),
                                pepperoni(false),
                                lettuce(false),
                                tomato(false) {}

    BurgerBuilder &addPepperoni()
    {
        this->pepperoni = true;
        return *this;
    }

    BurgerBuilder &addCheese()
    {
        this->cheese = true;
        return *this;
    }

    BurgerBuilder &addLettuce()
    {
        this->lettuce = true;
        return *this;
    }

    BurgerBuilder &addTomato()
    {
        this->tomato = true;
        return *this;
    }

    std::unique_ptr<Burger> build()
    {
        return std::make_unique<Burger>(this);
    }

public:
    float size;
    bool cheese;
    bool pepperoni;
    bool lettuce;
    bool tomato;
};

inline Burger::Burger(BurgerBuilder *builder)
{
    this->size = builder->size;
    this->cheese = builder->cheese;
    this->pepperoni = builder->pepperoni;
    this->lettuce = builder->lettuce;
    this->tomato = builder->tomato;
}