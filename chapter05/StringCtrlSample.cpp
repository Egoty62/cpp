#include <iostream>
#include <tchar.h>
#include "MyString.h"
using namespace std;

CMyString TestFunc()
{
    CMyString strTest("TestFunc() return");
    cout << strTest << endl;

    return strTest;
}

int _tmain(int argc, _TCHAR* argv[])
{
    // 이름 없는 임시 객체가 만들어짐
    TestFunc();

    return 0;
}