#include <iostream>
#include <cstring>
#include <iterator>


using std::cout;
using std::endl;
using std::string;

int main()
{
    string str {"hello world makson"};
    string delimiter = " ";
    string str_temp;
    int start = 0;
    int length = str.size();

    while(str.find(delimiter) <= length) {
        str_temp = str.substr(start, str.find(delimiter));
    }
}