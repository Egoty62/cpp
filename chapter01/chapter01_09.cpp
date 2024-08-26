#include <iostream>
#include <tchar.h>
using namespace std;
// 참조에 의한 호출

// 매개변수가 int에 대한 참조 형식
void TestFunc(int &rParam)
{
    // 피호출자 함수에서 원본의 값 변경
    rParam = 100;
}

int _tmain(int argc, _TCHAR* argv[])
{
    int nData = 0;

    // 참조에 의한 인수 전달
    TestFunc(nData);
    // TestFunc() 함수의 매개변수가 참조 형식이므로 & 붙이지 않음
    cout << nData << endl;

    return 0;
}