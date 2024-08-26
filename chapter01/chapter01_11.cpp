#include <iostream>
#include <tchar.h>
using namespace std;
// r-value 참조
int TestFunc(int nParam)
{
    int nResult = nParam * 2;

    return nResult;
}

int _tmain(int argc, _TCHAR* argv[])
{
    int nInput = 0;
    cout << "Input number : ";
    cin >> nInput;

    // 산술 연산으로 만들어진 임시 객체에 대한 r-value 참조
    int &&rdata = nInput + 5;
    cout << rdata << endl;

    // 함수 반환으로 만들어진 임시 객체에 대한 r-value 참조
    int &&result = TestFunc(10);
    
    // 값 변경 가능
    result += 10;
    cout << result << endl;

    return 0;
}