#include <iostream>

int main() 
{
    // cout

    char str[100] = "Hi, Gleb!";
    short old = 99;
    double weight = 82.54;

    std::cout << str << '\n';
    std::cout << old << '\n';
    std::cout << weight << std::endl;
    
    // или

    std::cout << str << '\n' << old << '\n' << weight << std::endl;

    // или

    printf("%s\n%d\n%.2f\n", str, old, weight);

    // cin

    std::cin >> old;
    std::cin >> weight;
    std::cout << str << '\n' << old << '\n' << weight << std::endl;

    // или

    std::cin >> old >> weight;
    std::cout << str << '\n' << old << '\n' << weight << std::endl;

    return 0;
}