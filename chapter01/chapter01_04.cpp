#include <iostream>
#include <string>
#include <cstdio>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
    int nAge;
    std::cout << "Enter your age." << std::endl;
    std::cin >> nAge;

    char szJob[32];
    std::cout << "Enter your job." << std::endl;
    std::cin >> szJob;

    std::string strName;
    std::cout << "Enter your name." << std::endl;
    std::cin >> strName;

    std::cout << "Your name is " << strName <<", "
        << "your age is " << nAge << ", "
        << "and your job is " << szJob << "." << std::endl;

    return 0;
}