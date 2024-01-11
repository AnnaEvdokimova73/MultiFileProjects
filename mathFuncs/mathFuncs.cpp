#include "header.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    int num1, num2, oper;

    std::cout << "Введите первое число :\t";
    std::cin >> num1;
    std::cout << "Введите второе число :\t";
    std::cin >> num2;

    while (true)
    {
        std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) :\t";
        std::cin >> oper;
        printInfo(num1, num2, oper);
    }
}
