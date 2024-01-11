#pragma once
#include <iostream>
#include<cmath>

enum operName
{
    ADD = 1,
    SUB,
    MULT,
    DIV,
    EXP
};

int addition(int num1, int num2);
int subtraction(int num1, int num2);
int multiplication(int num1, int num2);
int division(int num1, int num2);
int exponentiation(int num1, int num2);
void printInfo(int& num1, int& num2, int oper);
