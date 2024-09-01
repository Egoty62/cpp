#include <iostream>
#include <tchar.h>
using namespace std;
// 네임스페이스와 전역 변수의 검색 우선권

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
// 컴파일 오류가 발생