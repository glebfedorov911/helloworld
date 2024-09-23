#include <iostream>

using std::cout;
using std::endl;

void sum(int* a, int* b, int& c) {
    c = *a+*b;
}

int main()
{
    int array[][2] {{1, 2}, {3, 4}, {5, 6}};

    for (auto &inner : array) {
        for (auto elem : inner) {
            cout << elem << "\t";
        }   
        cout << endl;
    }

    int a = 5, b = 10, c = 0;
    int* ptra = &a;
    int* ptrb = &b;
    sum(ptra, ptrb, c);
    cout << c << endl;
}