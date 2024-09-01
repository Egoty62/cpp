#include <iostream>
#include <tchar.h>
using namespace std;
// 네임스페이스와 전역 변수의 검색 우선권

int nData = 200;

namespace TEST
{
    void TestFunc()
    {
        cout << nData << endl;
    }
    int nData = 100;
}

int _tmain(int argc, _TCHAR* argv[])
{
    TEST::TestFunc();

    return 0;
}
// 선언 순서가 앞인 전역변수 200이 출력됨