#include "MyBitSet32.h"
// MyBitSet32.cpp : implementation file
//

#include "stdafx.h"
#include "BitWise.h"
#include "MyBitSet32.h"


// CMyBitSet32

IMPLEMENT_DYNAMIC(CMyBitSet32, CStatic)

CMyBitSet32::CMyBitSet32()
{
    m_brush[ 0 ].CreateSolidBrush(RGB( 224, 224, 224 ));
    m_brush[ 1 ].CreateSolidBrush(RGB( 0, 204, 0 ));
    m_bitset = 0;
}

CMyBitSet32::~CMyBitSet32()
{
}


BEGIN_MESSAGE_MAP(CMyBitSet32, CStatic)
END_MESSAGE_MAP()



// CMyBitSet32 message handlers


BEGIN_MESSAGE_MAP(CMyBitSet32, CStatic)
    ON_WM_PAINT()
END_MESSAGE_MAP()


void CMyBitSet32::OnPaint()
{
    CPaintDC dc(this); // device context for painting
    // TODO: Add your message handler code here
    // Do not call CStatic::OnPaint() for painting messages

    RECT rc;
	GetClientRect(&rc);
    RECT rcBit( rc );
    for( int n = 0; n < 32; n++ )
    {
        rcBit.left = rc.left + n * 10;
        rcBit.right = rcBit.left + 9;
	    dc.FillRect(&rcBit,&m_brush[ m_bitset & 1 << n ]);
    }
}


void CMyBitSet32::setBitSet(DWORD bitSet)
{
    m_bitset = bitSet;
}


DWORD CMyBitSet32::getBitSet(void) const
{
    return m_bitset;
}
