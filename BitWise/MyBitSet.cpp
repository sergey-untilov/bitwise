// MyBitSet.cpp : implementation file
//

#include "stdafx.h"
#include "BitWise.h"
#include "MyBitSet.h"


// CMyBitSet

CMyBitSet::~CMyBitSet()
{
}

// CMyBitSet member functions

void CMyBitSet::SetBitSet(DWORD bitset)
{
    m_bitset = bitset;
}

DWORD CMyBitSet::GetBitSet(void) const
{
    return m_bitset;
}

CString CMyBitSet::BitSet2String(DWORD bitSet, int notation, BOOL separate)
{
    static CString s;
    s.Empty();
    switch( notation )
    {
        case BW_HEX:
            s.Format( _T("%X"), bitSet );
			//if( separate )
			//	s = Separate( s, 4 );
            //s = CString( "0X" ) + s;
            break;
        case BW_DEC:
            s.Format( _T("%lu"), bitSet );
			//if( separate )
			//	s = Separate( s, 3 );
            break;
        case BW_ORD:
			s.Format( _T("%o"), bitSet );
			//if( separate )
			//	s = Separate( s, 4 );
			//s = CString( "0" ) + s;
            break;
    }
    return s;
}

DWORD CMyBitSet::String2BitSet(CString str, int notation )
{
	str.Replace(_T(" " ), _T("") );
	str.MakeUpper();
	switch( notation )
	{
	case BW_HEX:
		{
			CString t(_T("0X"));
			if( str.Left( t.GetLength() ) != t )
				str = t + str;
		}
		break;
	case BW_DEC:
		break;
	case BW_ORD:
		{
			CString t(_T("0"));
			if( str.Left( t.GetLength() ) != t )
				str = t + str;
		}
		break;
	}
    static DWORD bw;
    bw = wcstoul((LPCTSTR)str, NULL, 0 );
    return bw;
}

void CMyBitSet::SetBit(int index, BOOL state)
{
    if( state )
        m_bitset |= (1 << index);
    else
        m_bitset &= ~(1 << index);
}

BOOL CMyBitSet::GetBit(int index) const
{
    return m_bitset & (1 << index) ? TRUE : FALSE;
}

BOOL CMyBitSet::SwitchBit(int index)
{
    SetBit( index, !GetBit( index ) );
    return GetBit( index );
}

DWORD CMyBitSet::Invert(void)
{
    m_bitset = ~m_bitset;
    return m_bitset;
}

void CMyBitSet::Clear(void)
{
    m_bitset = 0;
}

DWORD CMyBitSet::ShiftLeft(void)
{
    m_bitset = m_bitset << 1;
    return m_bitset;
}

DWORD CMyBitSet::ShiftRight(void)
{
    m_bitset = m_bitset >> 1;
    return m_bitset;
}

CString CMyBitSet::Separate(CString s, int size )
{
	ASSERT( size > 0 );
	if( s.GetLength() > size )
	{
		CString t( s );
		s.Empty();
		int len = 0;
		for( int n = t.GetLength(); n > 0; n-- )
		{
			if( len && len % size == 0 )
				s = _T(" ") + s;
			s = t.Mid( n - 1, 1 ) + s;
			len++;
		}
	}
    return s;
}

void CMyBitSet::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{	// storing code
		ar << m_bitset;
	}
	else
	{	// loading code
		ar >> m_bitset;
	}
}
