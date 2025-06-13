#include <iostream>
#include <tchar.h>
using namespace std;
// 다중 정의의 모호성
// r-value 참조 형식
void TestFunc(int &&nParam)
{
    cout << "int &&" << endl;
}

// r-value 참조 형식과 호출자 코드가 같음
void TestFunc(int nParam)
{
    cout << "int" << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
    // 모호한 호출, int형과 int&&형 모두 가능
    TestFunc(3 + 4);

    return 0;
}