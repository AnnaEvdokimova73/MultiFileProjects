#pragma once

#include <iostream>
#include <string>

class Figure {
public:
    Figure() : sidesCount{ 0 }, name{ "Фигура:" } {}

    int getSidesCount();
    virtual void printInfo();

protected:
    std::string name;
    int sidesCount;
};