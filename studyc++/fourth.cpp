#include <iostream>

namespace firstspace {
void foo()
{
    std::cout << "function from firstspace: foo()" << std::endl;
}
}

void foo()
{
    std::cout << "function: foo()" << std::endl;
}


int global_a = 5;

namespace firstspace {
struct point {
    double x, y;
};

inline namespace in_namespace {
int global_a_a = 15;
}
}


// using <пространство имен>::<элемент>; (хорошо)
using std::cout;
using std::cin;
using std::endl;

// using namespace <пространство имен>; (плохо)
// using namespace std;

// using <alias> = <тип данных>; #ТОЛЬКО ТИПЫ ДАННЫХ!!!
using byte_8 = unsigned char; // (1)
using point2D = firstspace::point;

// typedef unsigned char byte_8; // (2)
// (1) == (2)

// typedef float(*func_ptr)(int);
using func_ptr = float (*)(int);

// using >>>> typedef

int main()
{
    int global_a = 10;
    // firstspace::point pt {};
    point2D pt {};
    ::foo();
    firstspace::foo(); 

    byte_8 ch;
    byte_8* ptr_ch, *a;

    cout << ::global_a << endl; // 5
    cout << global_a << endl; // 10
    cout << firstspace::in_namespace::global_a_a << endl; // 15
    cout << firstspace::global_a_a << endl; // если указан inline
    
    // ::global_a - для обращения к глобальным объектам

    return 0;
}