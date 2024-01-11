#include "isotrian.h"

IsoTrian::IsoTrian(int _a, int _b, int _A, int _B) :
    Triangle(_a, _b, _a, _A, _B, _A)
{
    this->name = "Равнобедренный треугольник:";
}