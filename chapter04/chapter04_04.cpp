#include <iostream>
#include <tchar.h>
using namespace std;
// 얕은 복사의 문제점

int _tmain(int argc, _TCHAR* argv[])
{
    int *pA, *pB;

    pA = new int;
    *pA = 10;

    pB = new int;
    pB = pA;

    cout << *pA << endl;
    cout << *pB << endl;

    delete pA;
    delete pB;
    // pB = pA 인 상태에서 delete pA를 한 뒤 delete pB를 할 수 없음
    // *pB = *pA로 했다면 delete 해도 됨
    return 0;
}