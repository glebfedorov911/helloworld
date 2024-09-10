#include <iostream>

using namespace std;

int summa(int size, int A[]) {
    int summa = 0;
    for (int i = 0; i < size; i++) {
        summa += A[i];
    }
    return summa;
}

int main() {
    int N = 5;
    int A[N][N] {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
    };

    int B[N][N] {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
    };

    
}