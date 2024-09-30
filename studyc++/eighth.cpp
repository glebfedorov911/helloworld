#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    // char msg[] = "Hello, World!";
    string msg {"Hello, Gleb Fedorov!"};

    cout << msg.size() << " " << msg.capacity() << endl;
    cout << msg << endl;

    const char* data = msg.data();
    printf("%s\n", data);

    string fio {"Gleb Fedorov!"};
    string fio_new {fio};

    fio_new[5] = 'i';
    cout << fio << " " << fio_new << endl;

    for(const char& ch : fio)
        cout << ch << " ";
    
    cout << endl;

    for(auto it = msg.cbegin(); it != msg.cend(); ++it)
        cout << *it << " ";

    cout << endl;

    const char* ptr_str = fio.data();
    for(int i = 0; ptr_str[i] != 0; ++i)
        cout << ptr_str[i] << " ";
    
    cout << endl;

    string newmsg {"Hello"};

    newmsg.append(", World!");

    cout << newmsg << endl;

    string hello {"Hello"};
    string world {"World"};
    string msg2;

    hello.append(", ");
    hello += world;
    msg = hello + ", " + world;

    cout << hello << " " << endl;
    cout << msg << " " << endl;

    string cin_string;

    // cin >> cin_string; // до пробела
    getline(cin, cin_string, ';'); // 3 параметром указывается разделитель, до какого читается строка, он не обязателен
    cout << cin_string << endl;

    return 0;
}