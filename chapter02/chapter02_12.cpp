#include <iostream>
#include <tchar.h>
using namespace std;
// 식별자에 접근하는 코드가 속한 블록 범위

int nData(20);

int _tmain(int argc, _TCHAR* argv[])
{
    int nData(10);

    cout << nData << endl;
    cout << argc << endl;

    return 0;
}