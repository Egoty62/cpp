#include <iostream>
#include <tchar.h>
using namespace std;
// 디폴트 생성자의 정의를 클래스 외부로 분리

class CTest
{
public:
    // 디폴트 생성자 선언
    CTest();
    int m_nData = 5;
};

// 클래스 외부에서 디폴트 생성자 정의
CTest::CTest() { }
// 클래스 내부에서 CTest() = default;라고 작성하면 위 줄은 없어도 됨

int _tmain(int argc, _TCHAR* argv[])
{
    CTest a;
    cout << a.m_nData << endl;

    return 0;
}