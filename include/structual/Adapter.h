/*
 * In software engineering, the adapter pattern is a software design pattern that
 * allows the interface of an existing class to be used as another interface.
 * It is often used to make existing classes work with others without modifying their source code.
 */

#pragma once

#include <iostream>
class Lion
{
public:
    virtual void roar() = 0;
};

class AsianLion : public Lion
{
public:
    void roar() override
    {
        std::cout << "AsianLion roars" << std::endl;
    }
};

class AfricanLion : public Lion
{
public:
    void roar() override
    {
        std::cout << "AfricanLion roars" << std::endl;
    }
};

class Hunter
{
public:
    virtual void hunt(Lion *lion)
    {
        lion->roar();
    }
};

class WildDog
{
public:
    void bark()
    {
        std::cout << "WildDog barks" << std::endl;
    }
};

class WildDogAdapter : public Lion
{
public:
    WildDogAdapter(WildDog &wildDog) : wildDog(wildDog) {}
    void roar() override
    {
        wildDog.bark();
    }

private:
    WildDog wildDog;
};

