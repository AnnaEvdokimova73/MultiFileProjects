#include "quadrilateral.h"

Quadrilateral::Quadrilateral(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) :
    a{ _a }, b{ _b }, c{ _c }, d{ _d }, A{ _A }, B{ _B }, C{ _C }, D{ _D }
{
    this->name = "Четырехугольник:";
    this->sidesCount = 4;
}

int Quadrilateral::geta()
{
    return this->a;
}

int Quadrilateral::getb()
{
    return this->b;
}

int Quadrilateral::getc()
{
    return this->c;
}

int Quadrilateral::getd()
{
    return this->d;
}

int Quadrilateral::getA()
{
    return this->A;
}

int Quadrilateral::getB()
{
    return this->B;
}

int Quadrilateral::getC()
{
    return this->C;
}
int Quadrilateral::getD()
{
    return this->D;
}

void Quadrilateral::printInfo()
{
    std::cout << this->name << std::endl;
    std::cout << "Стороны:\t";
    std::cout << "a = " << this->geta() << " ";
    std::cout << "b = " << this->getb() << " ";
    std::cout << "c = " << this->getc() << " ";
    std::cout << "d = " << this->getd() << " ";
    std::cout << std::endl;
    std::cout << "Углы:\t";
    std::cout << "A = " << this->getA() << " ";
    std::cout << "B = " << this->getB() << " ";
    std::cout << "C = " << this->getC() << " ";
    std::cout << "D = " << this->getD() << " ";
    std::cout << std::endl << std::endl;
}
