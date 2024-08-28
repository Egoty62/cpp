#include <iostream>
#include <tchar.h>
// 함수 템플릿으로 만든 add() 함수

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int _tmain(int argc, _TCHAR* argv[])
{
    std::cout << add(3, 4) << std::endl;
    // add<int>(3, 4) 로도 작성 가능 (모호성 개선)
    std::cout << add<double>(3.3, 4.4) << std::endl;

    return 0;
}