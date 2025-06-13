#include <iostream>
#include <tchar.h>
using namespace std;
// r-value 참조의 사용 예 2
void TestFunc(int &nParam)
{
    cout << "TestFunc(int &)" << endl;
}

void TestFunc(int &&nParam)
{
    cout << "TestFunc(int &&)" << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
    // 3 + 4 연산 결과는 r-value, 절대로 l-value가 될 수 없음
    TestFunc(3 + 4);
    TestFunc(6);

    int x = 3;
    TestFunc(x);

    return 0;
}