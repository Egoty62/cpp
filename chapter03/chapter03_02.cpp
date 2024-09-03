#include <cstdio>
#include <tchar.h>
// 클래스를 이용해 객체지향 프로그램으로 변경

// 제작자의 코드
class USERDATA
{
public: // 접근 제어 지시자
    // 멤버 변수 선언
    int nAge;
    char szName[32];

    // 멤버 함수 선언 및 정의
    void Print()
    {
        // nAge와 szName은 Print() 함수의 지역 변수가 아님
        printf("%d, %s\n", nAge, szName);
    }
};

// 사용자의 코드
int _tmain(int argc, _TCHAR* argv[])
{
    USERDATA user = {10, "Aname"};
    user.Print();

    return 0;
}