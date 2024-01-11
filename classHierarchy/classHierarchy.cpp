#include "header.h"

void printFigInfo(Figure* fig, int numb)
{
    fig->printInfo();
}


int main()
{
    setlocale(LC_ALL, "Russian");

    int a = 10, b = 20, c = 30, d = 40;
    int A = 50, B = 60, C = 70, D = 80;

    Triangle trian(a, b, c, A, B, C);
    RectTrian recTrian(a, b, c, A, B);
    IsoTrian isoTrian(a, b, A, B);
    EqualTrian eqTrian(a, A);

    Quadrilateral quad(a, b, c, d, A, B, C, D);
    Rectangle rect(a, b);
    Square squar(a);
    Parall par(a, b, A, B);
    Rhombus rhom(a, A, B);

    Figure* figs[9];
    figs[0] = &trian;
    figs[1] = &recTrian;
    figs[2] = &isoTrian;
    figs[3] = &eqTrian;
    figs[4] = &quad;
    figs[5] = &rect;
    figs[6] = &squar;
    figs[7] = &par;
    figs[8] = &rhom;

    int size = sizeof(figs) / sizeof(Figure*);

    for (int i = 0; i < size; ++i)
    {
        printFigInfo(figs[i], i);
    }
}
