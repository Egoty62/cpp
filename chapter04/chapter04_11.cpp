#include <iostream>
#include <tchar.h>
using namespace std;
// r-value 참조의 사용 예 1
int _tmain(int argc, _TCHAR* argv[])
{
    int&& data = 3 + 4;
    cout << data << endl;
    data++;
    cout << data << endl;

    return 0;
}