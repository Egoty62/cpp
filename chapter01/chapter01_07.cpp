#include <iostream>
#include <tchar.h>
using namespace std;
// 배열 형태의 객체 생성

int _tmain(int argc, _TCHAR* argv[])
{
    // 객체를 배열 형태로 동적 생성
    int *arr = new int[5];
    for(int i = 0; i < 5; ++i)
        arr[i] = (i + 1) * 10;

    for(int i = 0; i < 5; ++i)
        cout << arr[i] << endl;

    // 배열 형태로 생성한 대상은 반드시 배열 형태를 통해 삭제
    delete[] arr;

    return 0;
}