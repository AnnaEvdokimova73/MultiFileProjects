#include "header.h"

int addition(int num1, int num2)
{
	return num1 + num2;
}

int subtraction(int num1, int num2)
{
	return num1 - num2;
}

int multiplication(int num1, int num2)
{
	return num1 * num2;
}

int division(int num1, int num2)
{
    if (num2 == 0)
    {
        throw std::invalid_argument("На 0 делить нельзя! (На самом деле можно, но не тут)");
    }
	return num1 / num2;
}

int exponentiation(int num1, int num2)
{
	return pow(num1, num2);
}

void printInfo(int& num1, int& num2, int oper)
{
    operName operation = static_cast<operName>(oper);
    switch (operation)
    {
    case ADD:
        std::cout << num1 << " + " << num2 << " = " << addition(num1, num2) << "\n";
        break;
    case SUB:
        std::cout << num1 << " - " << num2 << " = " << subtraction(num1, num2) << "\n";
        break;
    case MULT:
        std::cout << num1 << " * " << num2 << " = " << multiplication(num1, num2) << "\n";
        break;
    case DIV:
        try
        {
            std::cout << num1 << " / " << num2 << " = " << division(num1, num2) << "\n";
        }
        catch (const std::invalid_argument& except)
        {
            std::cout << except.what() << std::endl;
        }
        break;
    case EXP:
        std::cout << num1 << " в степени " << num2 << " = " << exponentiation(num1, num2) << "\n";
        break;
    }
}