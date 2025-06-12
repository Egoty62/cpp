#include <iostream>
#include <tchar.h>
// 얕은 복사

int _tmain(int argc, _TCHAR* argv[])
{
    int nSourceData = 10;

    int *pA, *pB;

    pA = &nSourceData;
    pB = &nSourceData;

    std::cout << "pA : " << *pA << ", pB : " << *pB << std::endl;

    return 0;
}