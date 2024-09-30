#include <iostream>
#include <algorithm>

// Федоров Глеб ФВТ 24ВП1 Лаба 3
// Даны массивы А, В, состоящие из N элементов каждый.
// Присвоить переменной F значение true, если 30%
// элементов массива А встречается в массиве В,
// и false в противном случае.

using std::cout;
using std::endl;
using std::count_if;
using std::find;

int main()
{
    int N = 10;
    int A[N] = {0, 35, 30, 12, 0, 11, 1, 2, 10, 0};
    int B[N] = {8, 1, 6, 5, 2, 7, 9, 3, 4, 10};

    auto F = [&A, &B, N]() {
        int k = count_if(A, A+N, [&B, N](int num) {
            return find(B, B+N, num) != (B+N);
        });
        int percent = (double) k / double(N) * 100;
        return percent >= 30;
    }();     

    cout << "F: " << F; 
}