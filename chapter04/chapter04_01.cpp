#include <iostream>
#include <tchar.h>
using namespace std;
// 복사 생성자 선언 및 정의

class CMyData
{
public:
    CMyData() { cout << "CMyData()" << endl; }

    // 복사 생성자 선언 및 정의
    CMyData(const CMyData &rhs)
        // : m_nData(rhs.m_nData)
    {
        this->m_nData = rhs.m_nData;
        cout << "CMyData(const CMyData &)" << endl;
    }

    int GetData() const { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }

private:
    int m_nData = 0;
};

int _tmain(int argc, _TCHAR* argv[])
{
    // 디폴트 생성자가 호출되는 경우
    CMyData a;
    a.SetData(10);

    // 복사 생성자가 호출되어 있는 경우
    CMyData b(a);
    cout << b.GetData() << endl;

    return 0;
}