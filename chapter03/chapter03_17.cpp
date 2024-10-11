#include <iostream>
#include <tchar.h>
using namespace std;
// const 예약어로 선언한 상수형 메서드

class CTest
{
public:
    CTest(int nParam) : m_nData(nParam) { }
    ~CTest() { }

    // 상수형 메서드로 선언 및 정의
    int GetData() const
    {
        // 멤버 변수의 값을 읽을 수는 있지만 쓸 수는 없음
        return m_nData;
    }

    int SetData(int nParam) { m_nData = nParam; }

private:
    int m_nData = 0;
};

int _tmain(int argc, _TCHAR* argv[])
{
    CTest a(10);
    cout << a.GetData() << endl;

    return 0;
}