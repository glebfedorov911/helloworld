#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    
    using std::ios;
    std::ofstream ofs("C:/._programming/projects_c++/helloworld/studyc++/ofs.dat", ios::out | ios::binary);
    std::ifstream ifs("C:/._programming/projects_c++/helloworld/studyc++/ifs.dat", ios::app | ios::binary);

    // ofs.open("C:/._programming/projects_c++/helloworld/studyc++/ofs.dat");
    // ifs.open("C:/._programming/projects_c++/helloworld/studyc++/ifs.dat");

    cout << (ofs.is_open() ? "Файл ofs.dat открыт" : "Ошибка открытия файла ofs.dat") << endl;
    cout << (ifs.is_open() ? "Файл ifs.dat открыт" : "Ошибка открытия файла ifs.dat") << endl;

    ofs.close();
    ifs.close();

    return 0;
}