#pragma once    // 한 번만 컴파일하게 만들기=

class CMyString
{
public:
    CMyString();
    ~CMyString();
    int SetString(const char* m_pszParam);
    const char* GetString() const;
    void Release();

private:
    // 문자열을 저장하기 위해 동적 할당한 메모리를 가리키는 포인터
    char* m_pszData;

    // 저장된 문자열의 길이
    int m_nLength;
};