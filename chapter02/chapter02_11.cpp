#include <iostream>
#include <tchar.h>
using namespace std;
// 네임스페이스를 포함한 다중 정의

// 전역(개념 상 무소속)
void TestFunc() { cout << "::TestFunc()" << endl; }

namespace TEST
{
    // TEST 네임스페이스 소속
    void TestFunc()
    {
        cout << "TEST::TestFunc()" << endl;
    }
}

namespace MYDATA
{
    // MYDATA 네임스페이스 소속
    void TestFunc()
    {
        cout << "DATA::TestFunc()" << endl;
    }
}

int _tmain(int argc, _TCHAR* argv[])
{
    TestFunc();     // 묵시적 전역
    // 호출자 함수인 _tmain() 함수의 네임스페이스가 전역이라 오류가 발생하지 않음
    ::TestFunc();   // 명시적 전역
    TEST::TestFunc();
    MYDATA::TestFunc();
    // using namespace TEST, using namespace MYDATA를 하면
    // 오버로드된 함수에 대한 호출이 모호하다는 오류가 발생함

    return 0;
}