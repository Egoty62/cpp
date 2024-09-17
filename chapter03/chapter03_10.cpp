#include <iostream>
#include <tchar.h>
using namespace std;
// 디폴트 생성자의 생략

class CTest
{
    int m_nData;

public:
    // 생성자의 매개변수로 전달된 값으로 멤버 변수 초기화
    CTest(int nParam) : m_nData(nParam)
    {
        cout << "CTest()::CTest()" << endl;
    }

    ~CTest()
    {
        // 생성할 때 매개변수로 받은 값을 출력
        cout << "~CTest()::CTest()" << m_nData << endl;
    }
};

int _tmain(int argc, _TCHAR* argv[])
{
    cout << "Begin" << endl;
    CTest a(1);
    cout << "Before b" << endl;
    CTest b(2);
    cout << "End" << endl;

    return 0;
}