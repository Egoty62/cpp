#include <iostream>
#include <tchar.h>
using namespace std;
// C++11의 멤버 변수 초기화

// 제작자 코드
class CTest
{
public:
    // 생성자 초기화 목록을 이용한 멤버 초기화
    CTest() { }

    // C++11부터 선언과 동시에 멤버 변수를 초기화할 수 있음
    int m_nData1 = 10;
    int m_nData2 = 20;

    void PrintData()
    {
        cout << m_nData1 << endl;
        cout << m_nData2 << endl;
    }
};

// 사용자 코드
int _tmain(int argc, _TCHAR* argv[])
{
    CTest t;
    t.PrintData();

    return 0;
}