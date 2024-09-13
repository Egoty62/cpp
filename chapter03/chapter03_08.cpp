#include <iostream>
#include <tchar.h>
using namespace std;
// 객체 내부 멤버 변수의 임의 접근 차단

// 제작자 코드
class CMyData
{
    // 기본 접근 제어 지시자는 'private'
    int m_nData;

public:
    int GetData() { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }
};

// 사용자 코드
int _tmain(int argc, _TCHAR* argv[])
{
    CMyData data;
    data.SetData(10);
    cout << data.GetData() << endl;
    /*  아래의 코드는 private로 인해 불가능
    data.m_nData = 10;  */

    return 0;
}