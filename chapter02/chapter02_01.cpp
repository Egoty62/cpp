#include <iostream>
#include <tchar.h>
// 디폴트 매개변수 사용

// nParam 매개변수의 디폴트 값은 10
int TestFunc(int nParam = 10)
{
    return nParam;
}

int _tmain(int argc, _TCHAR* argv[])
{
    // 호출자가 실인수를 기술하지 않았으므로 디폴트 값 적용
    std::cout << TestFunc() << std::endl;

    // 호출자가 실인수를 확정했으므로 디폴트 값 무시
    std::cout << TestFunc(20) << std::endl;

    return 0;
}