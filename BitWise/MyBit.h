#pragma once


// CMyBit

class CMyBit : public CStatic
{
	DECLARE_DYNAMIC(CMyBit)

public:
	CMyBit();
	virtual ~CMyBit();

    CBrush m_brush[ 2 ];
    BOOL m_state;
    void SetState( BOOL state ) { m_state = state ? TRUE : FALSE; Invalidate(); }
    BOOL GetState(void) const { return m_state; }

protected:
	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnPaint();
};


