#pragma once

// CMyBitSet command target

class CMyBitSet : public CObject
{
public:
    CMyBitSet() : m_bitset(0) {};
    CMyBitSet( CMyBitSet &bitset ) : m_bitset(bitset.m_bitset) {};
    CMyBitSet( DWORD bitset ) : m_bitset( bitset ) {};

	virtual ~CMyBitSet();

    DWORD m_bitset;

    CMyBitSet CMyBitSet::operator = (const CMyBitSet &rhs) { if( this != &rhs ) m_bitset = rhs.m_bitset; return *this; };
    CMyBitSet CMyBitSet::operator = (const DWORD rhs) { m_bitset = rhs; return *this; };
    CMyBitSet CMyBitSet::operator | (const CMyBitSet &rhs) { return CMyBitSet( m_bitset|rhs.m_bitset ); };
    CMyBitSet CMyBitSet::operator | (const DWORD rhs) { return CMyBitSet( m_bitset|rhs ); };
    CMyBitSet CMyBitSet::operator & (const CMyBitSet &rhs) { return CMyBitSet( m_bitset&rhs.m_bitset ); };
    CMyBitSet CMyBitSet::operator & (const DWORD rhs) { return CMyBitSet( m_bitset&rhs ); };
    CMyBitSet CMyBitSet::operator ^ (const CMyBitSet &rhs) { return CMyBitSet( m_bitset^rhs.m_bitset ); };
    CMyBitSet CMyBitSet::operator ^ (const DWORD rhs) { return CMyBitSet( m_bitset^rhs ); };
    CMyBitSet CMyBitSet::operator ~ () { return CMyBitSet( ~m_bitset ); };

    static CString BitSet2String(DWORD bitSet, int notation, BOOL separate);
    static DWORD String2BitSet(CString str, int notation);

    void SetBitSet(DWORD bitset);
    DWORD GetBitSet(void) const;
    void SetBit(int index, BOOL state);
    BOOL GetBit(int index) const;
    BOOL SwitchBit(int index);
    DWORD Invert(void);
    void Clear(void);
    DWORD ShiftLeft(void);
    DWORD ShiftRight(void);
    static CString Separate(CString s, int size);
	virtual void Serialize(CArchive& ar);
};


