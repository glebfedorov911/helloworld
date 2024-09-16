#include <iostream>

using namespace std;

// Федоров Глеб ФВТ 24ВП1 Лаба 5

bool is_persent_good(int A[], int B[], int size) {
    int k = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (A[i] == B[j]) {
                k++;
                break;
            }
        }
        int percent_same = ((double) k/(double) size) * 100;
        if (percent_same >= 30) {
            return true;
        }
    }
    return false;
}

int main() {
    const int N = 10;
    int A[N] {1, 2, 0, 0, 0, 0, 0, 0, 0, 0};
    int B[N] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    cout << "Исходные данные" << endl;
    cout << N << " " << A << " " << B << endl;
    bool F = is_persent_good(A, B, N);
    cout << F << endl;
}