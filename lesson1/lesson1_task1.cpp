#include <iostream>

using namespace std;

int main()
{
    int p, e, q, h;
    p = 1; e = 2; q = 0; h = 4;
    while (true) {
        if (p) {
            cout << e << endl;
            break;
        }
        else {
            if (q) break;
            else cout << h << endl;
        }
    }
}