#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    using std::ios;

    std::ofstream ofs("C:/._programming/projects_c++/helloworld/studyc++/out_course.dat");

    if(ofs.is_open())
    {
        ofs << 10 << " " << -5.34 << " " << -34 << endl;
    }

    ofs.close();

    int data1{}, data2{};
    double data3{};
    std::ifstream ifs("C:/._programming/projects_c++/helloworld/studyc++/out_course.dat");

    if(ifs.is_open())
    {
        ifs >> data1 >> data3 >> data2;
    }

    cout << data1 << " " << data3 << " " << data3 << endl;

    return 0;
}