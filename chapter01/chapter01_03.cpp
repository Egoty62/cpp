#include <iostream>
#include <tchar.h>
#include <string>

int _tmain(int argc, _TCHAR* argv[])
{
    std::string strData = "Test string";
    std::cout << "Sample string" << std::endl;
    std::cout << strData << std::endl;

    strData = "New string";
    std::cout << strData << std::endl;

    std::cout << "I am " << 20 << "years " << "old." << std::endl;

    return 0;
}