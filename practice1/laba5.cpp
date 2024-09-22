#include <iostream>

using namespace std;

// Федоров Глеб ФВТ 24ВП1 Лаба 3
// Даны массивы А, В, состоящие из N элементов каждый.
// Присвоить переменной F значение true, если 30%
// элементов массива А встречается в массиве В,
// и false в противном случае.


int main() {
    const int N = 10;
    int A[N] {1, 2, 0, 0, 0, 0, 0, 0, 0, 0};
    int B[N] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    auto f { [](int A[], int B[], int size) {
        int k = 0;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (A[i] == B[j]) {
                    k++;
                    break;
                }
            }
            int percent_same = ((double (k)/double (size)) * 100);
            if (percent_same >= 30) return true;
        }
        return false;
        } }; 

    cout << "Исходные данные" << endl;
    cout << "A:" << endl;
    for (auto i : A) {
        cout << i << " ";
    }
    cout << endl;
    cout << "B:" << endl;
    for (auto i : B) {
        cout << i << " ";
    }
    cout << endl;
    cout << "N: " << N << endl;
    cout << "F: " << f(A, B, N) << endl;
}