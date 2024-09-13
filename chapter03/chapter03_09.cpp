#include <iostream>
#include <tchar.h>
using namespace std;
// 생성자와 소멸자

class CTest
{
public:
    CTest()
    {
        cout << "CTest::CTest()" << endl;
    }

    ~CTest()
    {
        cout << "~CTest::CTest()" << endl;
    }
};

int _tmain(int argc, _TCHAR* argv[])
{
    cout << "Begin" << endl;
    CTest a;
    cout << "End" << endl;

    return 0;
}