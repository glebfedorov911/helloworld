#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

void swap_d(double* x, double* y) 
{
    double t = *x;
    *x = *y;
    *y = t;
}

void swap_d2(double& x, double& y) 
{
    double t = x;
    x = y;
    y = t;
}

struct point {
    char name[50]; // название точки
    double x, y; // координаты
};

double length(const point& p)
{
    // быстрее, тк мы не копируем значение, а передаем ссылку
    // не можем менять данные, тк ссылка константная
    return sqrt(p.x*p.x+p.y*p.y);
}

int main()
{
    int d = 10;
    int& lnk_d = d;

    lnk_d++;
    lnk_d *= 10;

    // одна ссылка = одна переменная

    cout << lnk_d << endl;

    lnk_d = -5;
    cout << d << endl;

    // double& alias_d; // ОШИБКА!! ССЫЛКА НЕ ИНИЦИАЛИЗИРОВАННА

    int a = 10;
    int *ptr = &a;
    int ar[] = {1, 2, 3};

    int& lnk_1 = a;
    int& lnk_2 = *ptr;
    int& lnk_3 = ar[1];
    // int& lnk_4 = 10; // ошибка (нельзя ссылку на данные без переменной)
    // int& lnk_5 = ptr; // ошибка (нельзя ссылку на указатель)

    double a1{1.2}, b1{-3.4};
    double a2{1.2}, b2{-3.4};
    swap_d(&a1, &b1); // хуже
    swap_d2(a2, b2); // лучше
    // swap_d2(2, b2); # НЕЛЬЗЯ

    cout << a1 << " " << b1 << endl;
    cout << a2 << " " << b2 << endl;

    short p[] {1, 2, 3, 4};

    // for (short x : p)
    //     x *= 2; // Данные в массиве не меняются, тк мы копируем значения в новую переменную {1, 2, 3, 4}

    for (short& x : p)
        x *= 2; // Данные в массиве меняются, тк мы обращаемся к памяти по ссылке {2, 4, 6, 8}


    for (short x : p)
        cout << x << " ";

    cout << endl;

    int s = 0;
    const int& ls = s; // не можем менять данные по ссылке, только читать их

    int x = ls;

    point p2 {"first", 10.0, 20.0};
    double len = length(p2);

    cout << len << endl;

    return 0;
}