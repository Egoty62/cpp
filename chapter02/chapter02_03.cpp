#include <iostream>
#include <tchar.h>
// 함수의 다중 정의

int add(int a, int b, int c)
{
    std::cout << "add(int, int, int) : ";

    return a + b + c;
}

int add(int a, int b)
{
    std::cout << "add(int, int) : ";

    return a + b;
}

double add(double a, double b)
{
    std::cout << "add(double, double) : ";

    return a + b;
}

int _tmain(int argc, _TCHAR* argv[])
{
    std::cout << add(3, 4) << std::endl;
    std::cout << add(3, 4, 5) << std::endl;
    std::cout << add(3.3, 4.4) << std::endl;

    return 0;
}