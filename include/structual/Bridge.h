/*
 * The bridge pattern is a structural design pattern that lets you split a large class or a set of closely related classes into two separate hierarchies
 * Bridge patterns usually are implemented by keeping an object of the "abstraction" class as a member of the "implementation" class.
 */

#pragma once

#include <string>
#include <iostream>

// Define the Theme interface
class Theme
{
public:
    virtual std::string getColor() const = 0; // Pure virtual function
    virtual ~Theme() = default;               // Virtual destructor
};

// Implement the DarkTheme class
class DarkTheme : public Theme
{
public:
    std::string getColor() const override
    {
        return "Dark Black";
    }
};

// Implement the LightTheme class
class LightTheme : public Theme
{
public:
    std::string getColor() const override
    {
        return "Off white";
    }
};

// Implement the AquaTheme class
class AquaTheme : public Theme
{
public:
    std::string getColor() const override
    {
        return "Light blue";
    }
};

class WebPage
{
public:
    virtual void getContent() = 0;
};

class About : public WebPage
{
public:
    About(Theme *theme) : theme(theme) {}
    void getContent() override
    {
        std::cout << "About page in" << this->theme->getColor() << std::endl;
    }

protected:
    Theme *theme;
};

class Careers : public WebPage
{
public:
    Careers(Theme *theme) : theme(theme) {}
    void getContent() override
    {
        std::cout << "Careers page in" << this->theme->getColor() << std::endl;
    }

protected:
    Theme *theme;
};
