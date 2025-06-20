#include <iostream>
#include <tchar.h>
using namespace std;
// 올바르게 복사 생성자를 사용하는 예제
class CMyData
{
public:
    CMyData(int nParam)
    {
        m_pnData = new int;
        *m_pnData = nParam;
    }

    // 복사 생성자 선언 및 정의
    CMyData(const CMyData &rhs)
    {
        cout << "CMyData(const CMyData &rhs)" << endl;

        // 메모리를 할당
        m_pnData = new int;

        // 포인터가 가리키는 위치에 값 복사
        *m_pnData = *rhs.m_pnData;
    }

    // 객체가 소멸하면 동적 할당한 메모리 해제
    ~CMyData()
    {
        delete m_pnData;
    }

    // 단순 대입 연산자 함수 정의
    CMyData& operator=(const CMyData &rhs)
    {
        *m_pnData = *rhs.m_pnData;

        // 객체 자신에 대한 참조 반환
        return *this;
    }

    int GetData()
    {
        if(m_pnData != NULL)
            return *m_pnData;

        return 0;
    }

private:
    // 포인터 멤버 데이터
    int *m_pnData = nullptr;
};

int _tmain(int argc, _TCHAR* argv[])
{
    CMyData a(10);
    CMyData b(20);

    // 단순 대입을 시도하면 모든 멤버의 값을 그대로 복사함
    a = b;
    cout << a.GetData() << endl;

    return 0;
}