#include <iostream>
#include <tchar.h>
using namespace std;
// 참조형 변수 사용

int _tmain(int argc, _TCHAR* argv[])
{
    int nData = 10;

    // nData 변수에 대한 참조자 선언
    int &ref = nData;

    // 참조자의 값을 변경하면 원본도 변경됨
    ref = 20;
    cout << nData << endl;

    // 포인터를 쓰는 것과 유사
    int *pnData = &nData;
    *pnData = 30;
    cout << nData << endl;

    return 0;
}