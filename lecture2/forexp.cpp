#include <iostream>

using namespace std;

int main() {
    int numbers[] {1, 2, 3};
    for (int n : numbers) {
        cout << n << " ";
    }

    for (auto n : numbers) {
        cout << n << " ";
    }

    for (int i = 0; i < size(numbers); i++) {
        cout << numbers[i] << " ";
    }
}