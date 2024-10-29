/*
 * The abstract factory pattern provides a way to encapsulate a group of
 * individual factories that have a common theme without specifying their
 * concrete classes
 */

#pragma once

#include <iostream>

//Three different kinds of products: Phone, Pad and TV
//They can be produced on three different lines in the same brand's factory

class Phone {
public:
    virtual void getBrand() = 0;
};

class Pad {
public:
    virtual void getBrand() = 0;
};


class TV {
public:
    virtual void getBrand() = 0;
};

class iPhone : public Phone {
public:
    void getBrand() override {
        std::cout << "I am a iPhone" << std::endl;
    }
};

class iPad : public Pad {
public:
    void getBrand() override {
        std::cout << "I am a iPad" << std::endl;
    }
};

class AppleTV : public TV {
public:
    void getBrand() override {
        std::cout << "I am a Apple TV" << std::endl;
    }
};

class XiaomiPhone : public Phone {
public:
    void getBrand() override {
        std::cout << "I am a Xiaomi Phone" << std::endl;
    }
};

class XiaomiPad : public Pad {
public:
    void getBrand() override {
        std::cout << "I am a Xiaomi Pad" << std::endl;
    }
};

class XiaomiTV : public TV {
public:
    void getBrand() override {
        std::cout << "I am a Xiaomi TV" << std::endl;
    }
};

class Company {
public:
    virtual Phone *makePhone() = 0;

    virtual Pad *makePad() = 0;

    virtual TV *makeTV() = 0;
};

class Apple : public Company {
public:
    Phone *makePhone() override {
        return new iPhone();
    }

    Pad *makePad() override {
        return new iPad();
    }

    TV *makeTV() override {
        return new AppleTV();
    }
};

class Xiaomi : public Company {
public:
    Phone *makePhone() override {
        return new XiaomiPhone();
    }

    Pad *makePad() override {
        return new XiaomiPad();
    }

    TV *makeTV() override {
        return new XiaomiTV();
    }
};

