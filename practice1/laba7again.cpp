#include <iostream>
#include <cstring>
#include <iterator>


using std::cout;
using std::endl;
using std::string;

int main()
{
    string str{ "hello world makson" };
    string delimiter = " ";
    string str_temp;
    int start = 0;
    int length = str.size();
    int k = 0;
    while (true)
    {
        str_temp = str.substr(start, str.find(delimiter));
        str = str.substr(str.find(delimiter) + 1, length);
        length = str.size();
        cout << str_temp << " | ";
        if (k == 2) break;
        k++;
    }
}
