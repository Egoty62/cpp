#include <iostream>
#include <tchar.h>
using namespace std;
// 참조 전달

// 참조 전달이므로 호출자 변수의 값 변경 가능
void Swap(int &a, int &b)
{
    int nTmp = a;
    a = b;
    b = nTmp;
}

int _tmain(int argc, _TCHAR* argv[])
{
    int x = 10, y = 20;

    // 참조 전달이며 두 변수의 값이 교환됨
    Swap(x, y);

    cout << "x : " << x << "\ny : " << y << endl;

    return 0;
}