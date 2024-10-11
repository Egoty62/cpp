#include <iostream>
#include <tchar.h>
#include "MyString.h"
using namespace std;


void TestFunc(const CMyString &param)
{
    cout << param.GetString() << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
    CMyString strData;
    strData.SetString("Hello");
    TestFunc(strData);

    return 0;
}