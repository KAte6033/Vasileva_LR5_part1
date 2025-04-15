#include <iostream>
#include "Vasileva_MathTask.h"

using namespace std;

int main ()
{
    int length = 0, width = 0;

    EnterDigit(length, "Введите длину прямоугольника: ");

    EnterDigit(width, "Введите ширину прямоугольника: ");

    int area = Area(length, width);

    cout << "Площадь прямоугольника: " << area << endl;
}