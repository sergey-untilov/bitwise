// MyBit.cpp : implementation file
//

#include "stdafx.h"
#include "BitWise.h"
#include "MyBit.h"

// CMyBit

IMPLEMENT_DYNAMIC(CMyBit, CStatic)

CMyBit::CMyBit()
{
    m_brush[ 0 ].CreateSolidBrush(RGB( 224, 224, 224 ));
    m_brush[ 1 ].CreateSolidBrush(RGB( 0, 204, 0 ));
    m_state = FALSE;
}

CMyBit::~CMyBit()
{
}

BEGIN_MESSAGE_MAP(CMyBit, CStatic)
    ON_WM_PAINT()
END_MESSAGE_MAP()

// CMyBit message handlers

void CMyBit::OnPaint()
{
    CPaintDC dc(this); // device context for painting
    // TODO: Add your message handler code here
    // Do not call CStatic::OnPaint() for painting messages

    RECT rc;
	GetClientRect(&rc);
	dc.FillRect(&rc,&m_brush[m_state]);
}
