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

using namespace firstspace;

int main()
{
    int global_a = 10;
    firstspace::point pt {};
    ::foo();
    firstspace::foo(); 

    std::cout << ::global_a << std::endl; // 5
    std::cout << global_a << std::endl; // 10
    std::cout << firstspace::in_namespace::global_a_a << std::endl; // 15
    std::cout << firstspace::global_a_a << std::endl; // если указан inline
    
    // ::global_a - для обращения к глобальным объектам

    return 0;
}