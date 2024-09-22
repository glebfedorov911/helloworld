#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    bool fl_print = false;
    wchar_t wch;
    char ch = 'D'; // (1 байт)
    char ch1 = 'Я'; // подчернуто тк нужно больше байт (2 байт)
    char str[] = "Привет мир!";
    ch = str[0];
    wchar_t p_wch = str[0];
    
    // fl_print = true;
    wch = L'Я';

    if(fl_print)
        cout << "Hi!" << endl;
    cout << fl_print << endl;
    cout << wch << endl;
    cout << str << endl;
    cout << sizeof(str) << endl; // некоторые 2 байта, некоторые 1 => 21
    cout << ch << endl; // непонятный символ, тк не хватает байт (занимает 2, но в переменной максимум 1)
    cout << p_wch << endl;


    int* ptr_i = 0L; // = NULL = nullptr; (Лучше всего: nullptr)
    char* ptr_ch = 0L;
    void* ptr = 0L;

    // ptr_ch = ptr_i; // ОШИБКА
    ptr_i = (int *)ptr; // ОБЯЗАТЕЛЬНО ПРИВЕДЕНИЕ ТИПОВ!!
    ptr_ch = (char *)ptr_i;
    
    ptr_i = (int *)malloc(sizeof(int) * 5);
    printf("%p\n", nullptr);

    char msg[] = "I like C++ language";
    // std::list std::vector std::string ...

    for(char x : msg)
        cout << x << " ";

    return 0;
}