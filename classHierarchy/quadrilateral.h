#pragma once

#include <iostream>
#include "figure.h"

class Quadrilateral : public Figure {
public:
    Quadrilateral(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D);

    int geta();
    int getb();
    int getc();
    int getd();
    int getA();
    int getB();
    int getC();
    int getD();

    virtual void printInfo() override;

protected:
    int a, b, c, d;
    int A, B, C, D;
};
