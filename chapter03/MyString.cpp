#include <iostream>
#include <cstring>
#include "MyString.h"
using namespace std;

CMyString::CMyString()
: m_pszData(NULL), m_nLength(0)
{

}

CMyString::~CMyString()
{
    Release();
}

int CMyString::SetString(const char* pszParam)
{
    Release();

    if (pszParam == NULL)
        return 0;

    int arrLength = strlen(pszParam);

    if (arrLength == 0)
        return 0;

    m_pszData = new char[arrLength + 1];
    m_nLength = arrLength;
    strcpy(m_pszData, pszParam);

    return arrLength;
}

const char* CMyString::GetString() const
{
    return m_pszData;
}

void CMyString::Release()
{
    if (m_pszData != NULL)
        delete[] m_pszData;

    m_pszData = NULL;
    m_nLength = 0;
}