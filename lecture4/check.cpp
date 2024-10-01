#include <iostream>

using std::cout;
using std::endl;

int sum1(int a, int b)
{
    a += 10, 
    b += 20;
    return a+b;
}

int sum2(int &a, int &b)
{
    a += 10, 
    b += 20;
    return a+b;
}

int sum3(int* a, int* b)
{
    *a += 10, 
    *b += 20;
    return *a+*b;
}

void sum4(int a, int b, int* r)
{
    *r = a+b;
}

int main()
{
    int a = 10, b = 20;
    // cout << sum1(a, b) << endl;
    // cout << sum2(a, b) << endl;
    cout << sum3(&a, &b) << endl;
    cout << a << " " << b << endl;

    int z = 0;
    int* ptr = &z;
    sum4(a, b, ptr);
    // sum4(a, b, &z);
    cout << z;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << X[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}