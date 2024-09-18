#include <iostream>
#include <tchar.h>
#include "CMyString.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    CMyString strData;
    strData.SetString("Hello");
    cout << strData.GetString() << endl;

    return 0;
}