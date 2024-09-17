#include <iostream>
#include <tchar.h>
using namespace std;
// new와 delete 연산자 사용

class CTest
{
    int m_nData;

public:
    CTest()
    {
        cout << "CTest()::CTest()" << endl;
    }

    ~CTest()
    {
        cout << "~CTest()::CTest()" << endl;
    }
};

int _tmain(int argc, _TCHAR* argv[])
{
    cout << "Begin" << endl;

    // new 연산자를 이용해 동적으로 객체 생성
    CTest *pData = new CTest;
    cout << "Test" << endl;

    // delete 연산자를 이용해 객체 삭제
    delete pData;
    cout << "and" << endl;

    // 배열로 생성한 것은 반드시 배열로 삭제
    CTest *paData = new CTest[3];
    cout << "Test" << endl;
    delete [] paData;
    cout << "End" << endl;

    return 0;
}