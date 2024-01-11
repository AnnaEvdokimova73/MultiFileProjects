#include "figure.h"

int Figure::getSidesCount()
{
    return this->sidesCount;
}

void Figure::printInfo()
{
    std::cout << this->name << std::endl;
    std::cout << "Количество сторон: " << this->getSidesCount() << std::endl;
}