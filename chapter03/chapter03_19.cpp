#include <iostream>
#include <tchar.h>
using namespace std;
// const_cast< > 를 사용한 상수형 참조 변경

void TestFunc(const int &nParam)
{
    // 상수형 참조였으나 일반 참조로 형변환
    int &nNewParam = const_cast<int &>(nParam);

    // 따라서 l-value가 될 수 있음
    nNewParam = 20;
}

int _tmain(int argc, _TCHAR* argv[])
{
    int nData = 10;

    // 상수형 참조로 전달하지만 값이 변경됨
    TestFunc(nData);

    cout << nData << endl;

    return 0;
}