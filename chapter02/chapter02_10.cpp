#include <iostream>
#include <tchar.h>
using namespace std;
// 네임스페이스의 중첩

namespace TEST
{
    int g_nData = 100;
    namespace DEV
    {
        int g_nData = 200;
        namespace WIN
        {
            int g_nData = 300;
        }
    }
}

int _tmain(int argc, _TCHAR* argv[])
{
    cout << TEST::g_nData << endl;
    cout << TEST::DEV::g_nData << endl;
    cout << TEST::DEV::WIN::g_nData << endl;

    return 0;
}