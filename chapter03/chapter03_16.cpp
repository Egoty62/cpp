#include <iostream>
#include <tchar.h>
using namespace std;
// this 포인터 사용

class CMyData
{
public:
    CMyData(int nParam) : m_nData(nParam) { }
    void PrintData()
    {
        // m_nData 값 출력
        cout << m_nData << endl;

        // CMyData 클래스의 멤버인 m_nData 값 출력
        cout << CMyData::m_nData << endl;

        // 메서드를 호출한 인스턴스의 m_nData 멤버 값 출력
        cout << this->m_nData << endl;

        // 메서드를 호출한 인스턴스의 CMyData 클래스 멤버 m_nData 값 출력
        cout << this->CMyData::m_nData << endl;

        // 단순히 m_nData만 적어도 실제로 컴파일될 때는 this->m_nData로 컴파일됨
    }

private:
    int m_nData;
};

int _tmain(int argc, _TCHAR* argv[])
{
    CMyData a(5), b(10);
    a.PrintData();
    b.PrintData();
    // PrintData 메서드의 괄호 속에 &a, &b는 보이지 않지만 실제로는 전달됨

    return 0;
}