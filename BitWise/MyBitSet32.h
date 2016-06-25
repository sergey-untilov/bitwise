#pragma once


// CMyBitSet32

class CMyBitSet32 : public CStatic
{
	DECLARE_DYNAMIC(CMyBitSet32)

public:
	CMyBitSet32();
	virtual ~CMyBitSet32();

    CBrush m_brush[ 2 ];
protected:
	DECLARE_MESSAGE_MAP()
public:
    DECLARE_MESSAGE_MAP()
    afx_msg void OnPaint();
    DWORD m_bitset;
    void setBitSet(DWORD bitSet);
    DWORD getBitSet(void) const;
};


