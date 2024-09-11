#include <iostream>
#include <tchar.h>
using namespace std;
// 멤버 함수 선언과 정의를 분리

// 제작자 코드
class CTest
{
public:
    // CTest 클래스의 생성자 함수 선언 및 정의
    CTest()
    {
        // 인스턴스가 생성되면 멤버 데이터를 자동으로 초기화
        m_nData = 10;
    }
    // 멤버 데이터 선언
    int m_nData;

    // 멤버 함수 선언, 정의는 분리함
    void PrintData();
};

// 외부에 분리된 멤버 함수 정의
void CTest::PrintData()
{
    // 멤버 데이터에 접근하고 값 출력
    cout << m_nData << endl;
}

// 사용자 코드
int _tmain(int argc, _TCHAR* argv[])
{
    CTest t;
    t.PrintData();
    
    return 0;
}