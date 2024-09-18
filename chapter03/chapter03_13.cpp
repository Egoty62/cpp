#include <iostream>
#include <tchar.h>
using namespace std;
// 생성자 다중 정의

class CMyData
{
public:
    // 디폴트 생성자는 없음
    // 매개변수가 int 하나인 생성자 함수 선언 및 정의
    CMyData(int nParam) : m_nData(nParam) { }

    // 매개변수가 int 자료형 두 개인 생성자 함수 다중 정의
    CMyData(int x, int y) : m_nData(x + y) { };
    // 한 줄짜리에서 세미콜론은 붙혀도 되고 안 붙혀도 되는 듯

    int GetData() { return m_nData; }

private:
    int m_nData;
};

int _tmain(int argc, TCHAR* argv[])
{
    CMyData a(10);
    CMyData b(3, 4);

    cout << a.GetData() << endl;
    cout << b.GetData() << endl;

    return 0;
}