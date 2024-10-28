#pragma once

#include <iostream>

class Door
{
public:
    virtual float getWidth() = 0;
    virtual float getHeight() = 0;
};

class WoodenDoor : public Door
{
public:
    WoodenDoor(float width, float height) : width(width), height(height) {}

    virtual float getWidth()
    {
        return width;
    }
    virtual float getHeight()
    {
        return height;
    }

protected:
    float width;
    float height;
};

class DoorFactory
{
    public:
    static Door* makeDoor(float width, float height)
    {
        return new WoodenDoor(width, height);
    }
};
