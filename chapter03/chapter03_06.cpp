#include <iostream>
#include <tchar.h>
using namespace std;
// 생성자 초기화 목록을 이용한 멤버 변수 초기화

// 제작자 코드
class CTest
{
public:
    // 생성자 초기화 목록을 이용한 멤버 초기화
    CTest(int &val1)
        : m_nData1(10), m_nData2(val1)
    { }

    // 두 개의 멤버 데이터 선언
    int m_nData1;
    int& m_nData2;

    // 멤버 함수 선언 및 정의
    void PrintData()
    {
        // 두 개의 멤버 데이터에 접근하고 값 출력
        cout << m_nData1 << endl;
        cout << m_nData2 << endl;
    }
};

// 사용자 코드
int _tmain(int argc, _TCHAR* argv[])
{
    int val1 = 25;
    CTest t = CTest(val1);
    t.PrintData();

    return 0;
}