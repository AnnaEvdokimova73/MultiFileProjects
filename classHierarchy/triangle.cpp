#include "triangle.h"

Triangle::Triangle(int _a, int _b, int _c, int _A, int _B, int _C) :
    a{ _a }, b{ _b }, c{ _c }, A{ _A }, B{ _B }, C{ _C }
{
    this->name = "Треугольник:";
    this->sidesCount = 3;
}

void Triangle::printInfo()
{
    std::cout << this->name << std::endl;
    std::cout << "Стороны:\t";
    std::cout << "a = " << this->geta() << " ";
    std::cout << "b = " << this->getb() << " ";
    std::cout << "c = " << this->getc() << " ";
    std::cout << std::endl;
    std::cout << "Углы:\t";
    std::cout << "A = " << this->getA() << " ";
    std::cout << "B = " << this->getB() << " ";
    std::cout << "C = " << this->getC() << " ";
    std::cout << std::endl << std::endl;
}

int Triangle::geta()
{
    return this->a;
}

int Triangle::getb()
{
    return this->b;
}

int Triangle::getc()
{
    return this->c;
}

int Triangle::getA()
{
    return this->A;
}

int Triangle::getB()
{
    return this->B;
}

int Triangle::getC()
{
    return this->C;
}