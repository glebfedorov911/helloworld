#include <iostream>
#include <list>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int val = 0;
    int pow[] = {1, 2, 4, 8};

    double d(-4.37); // functional notation ()
    short sh(10); // functional notation ()

    char ch{'b'}; // braced initialization {}
    // long lv{5.43}; // braced initialization {}
    long lv(5.43);
    // при {} - ошибка при () - отбрасывание вещественной части (приведение к целому числу)

    int sum {2 + 3 + 4 + 5};
    double p (1 * 2.3 * 4.5 - 1);
    bool n_fl(false), t_fl(true);

    cout << d << endl;
    cout << sh << endl;
    cout << ch << endl;
    cout << lv << endl;

    const double pi {3.1415}; //константы СРАЗУ ДОЛЖНЫ быть иницилизированны!!

    auto i = -100; // int
    // auto d = 76.98; // double
    auto g = 0.55f; // float
    auto h('f'); // char
    auto i1{1+2-10}; // int
    auto h1 = short(10) + 10000000UL; // unsigned long
    auto g1{55u}; //unsigned int

    // int *ptr = nullptr;
    // int k;
    // int& lk = k;

    // auto t1 = k; // int
    // auto t2 = *ptr; // int
    // auto t3 = ptr; // int *
    // auto t4 = &ptr; // int **
    // auto t5 = lk; // int
  
    const int *ptr = nullptr;
    const int k = 0;
    const int& lk = k;

    auto t1 = k; // int
    // const auto t1 = k; // const int
    // auto t2 = *ptr; // int
    auto t3 = ptr; // const int *
    auto t4 = &ptr; // const int **
    auto t5 = lk; // int

    decltype(k) var1 = 1; // const int
    decltype(ptr) var2; // const int *
    decltype(lk) var3 = k; // const int &

    std::list<short> dg = {-3, -2, 0, 2, 3};

    for(std::list<short>::iterator i = dg.begin(); i != dg.end(); ++i)
        std::cout << *i << " ";

    cout << endl;

    for(auto i = dg.begin(); i != dg.end(); ++i)
        std::cout << *i << " ";


    // return 0;
}