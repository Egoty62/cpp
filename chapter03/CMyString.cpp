#include <iostream>
#include "CMyString.h"
using namespace std;

CMyString::CMyString()
    : m_pszData(NULL)
    , m_nLength(0)
{

}

CMyString::~CMyString()
{

}

int CMyString::SetString(const char* pszParam)
{
    return 0;
}

const char* CMyString::GetString()
{
    return "hello";
}

void CMyString::Release()
{

}