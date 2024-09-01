#include <iostream>
#include <tchar.h>
using namespace std;
// 범위 검색의 확장

int _tmain(int argc, _TCHAR* argv[])
{
    int nInput = 0;

    cout << "Enter an integer greater than 11" << endl;
    cin >> nInput;

    if(nInput > 10)
    {
        cout << nInput << endl;
    }

    else
        cout << "Error" << endl;

    return 0;
}