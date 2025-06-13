#pragma once    // 한 번만 컴파일하게 만들기=

class CMyString
{
public:
    CMyString();
    explicit CMyString(const char *pszParam);   // 변환 생성자
    CMyString(const CMyString &rhs);            // 복사 생성자
    CMyString(CMyString &&rhs);                 // 이동 생성자
    CMyString& operator=(const CMyString &rhs);
    ~CMyString();
    int SetString(const char* m_pszParam);
    const char* GetString() const;
    void Release();

    operator char*() const
    {
        return m_pszData;
    }

private:
    // 문자열을 저장하기 위해 동적 할당한 메모리를 가리키는 포인터
    char* m_pszData;

    // 저장된 문자열의 길이
    int m_nLength;
};