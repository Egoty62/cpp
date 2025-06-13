#include <iostream>
#include <cstring>
#include "MyString.h"
using namespace std;

CMyString::CMyString()
: m_pszData(NULL), m_nLength(0)
{

}

CMyString::CMyString(const char *pszParam)
: m_pszData(NULL), m_nLength(0)
{
    SetString(pszParam);
}

CMyString::CMyString(const CMyString &rhs)
: m_pszData(NULL), m_nLength(0)
{
    this->SetString(rhs.GetString());
}

// 이동 생성자
CMyString::CMyString(CMyString &&rhs)
: m_pszData(NULL), m_nLength(0)
{
    cout << "CMyString 이동 생성자 호출" << endl;

    // 얕은 복사를 수행해도 상관 없음, 어차피 원본이 곧 소멸되기 때문
    m_pszData = rhs.m_pszData;
    m_nLength = rhs.m_nLength;

    // 원본 임시 객체의 멤버들은 초기화, 절대 해제하면 안 됨
    rhs.m_pszData = NULL;
    rhs.m_nLength = 0;
}

CMyString& CMyString::operator=(const CMyString &rhs)
{
    if(this != &rhs)
        this->SetString(rhs.GetString());

    return *this;
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