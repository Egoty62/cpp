#include <iostream>
#include <tchar.h>
using namespace std;
// using 선언

namespace TEST
{
    int g_nData = 100;

    void TestFunc()
    {
        // cout에 대해 범위를 지정하지 않아도 됨
        cout << "TEST::TestFunc()" << endl;
    }
}

// TEST 네임스페이스에 using 선언
using namespace TEST;

int _tmain(int argc, _TCHAR* argv[])
{
    // TestFunc()나 g_nData에도 범위 지정 할 필요 없음
    TestFunc();
    cout << g_nData << endl;

    return 0;
}