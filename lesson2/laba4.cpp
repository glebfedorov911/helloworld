#include <iostream>

using namespace std;

// Федоров Глеб ФВТ 24ВП1 Лаба 4 

int summa(int size, int A[]) {
    int summa = 0;
    for (int i = 0; i < size; i++) {
        summa += A[i];
    }
    return summa;
}

int main() {
    int N = 5;
    bool F = false;
    bool only_negative = true;
    int all_summa_b = 0;
    int A[N][N] {
        {1, 2, 3, 4, 5},
        {1, 2, 4, 4, 5},
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

    for (int i = 0; i < N; i++) {
        int summa_b_string = summa(N, B[i]); 
        all_summa_b += summa_b_string > 0 ? summa_b_string : 0;
    }
    for (int i = 0; i < N; i++) {
        int summa_a_string = summa(N, A[i]);
        if (summa_a_string > 0) {
            only_negative = false;
        }
        if (summa_a_string > all_summa_b > 0) {
            F = true;
            break; 
        }
    }
    if (!only_negative) cout << F;
    else cout << "Все суммы матрицы А - отрицательны!";
}