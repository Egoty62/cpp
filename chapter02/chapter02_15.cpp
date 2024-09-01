#include <iostream>
#include <tchar.h>
using namespace std;
// TEST 네임스페이스에 using 선언 추가

int nData = 100;

namespace TEST
{
    int nData = 200;
}

using namespace TEST;

int _tmain(int argc, _TCHAR* argv[])
{
    cout << nData << endl;

    return 0;
}
// 컴파일 오류 발생
// 모호성을 가지고 있기 때문