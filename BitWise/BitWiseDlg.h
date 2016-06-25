
// BitWiseDlg.h : файл заголовка
//

#pragma once

#include "mybit.h"
#include "mybitset.h"

const WORD bw_internal_version = 101;

// диалоговое окно CBitWiseDlg
class CBitWiseDlg : public CDialogEx
{
// Создание
public:
	CBitWiseDlg(CWnd* pParent = NULL);	// стандартный конструктор

// Данные диалогового окна
	enum { IDD = IDD_BITWISE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
    CMyBitSet m_bitset1;
    CMyBitSet m_bitset2;
    CMyBitSet m_bitset3;
    CMyBit m_bitAr1[ 32 ];
    CMyBit m_bitAr2[ 32 ];
    CMyBit m_bitAr3[ 32 ];
	CWnd* m_edit1;
	CWnd* m_edit2;
	CWnd* m_edit3;

    afx_msg void OnStnClickedStatic100();
    afx_msg void OnClickedStatic101();
    afx_msg void OnClickedStatic102();
    afx_msg void OnClickedStatic103();
    afx_msg void OnClickedStatic104();
    afx_msg void OnClickedStatic105();
    afx_msg void OnClickedStatic106();
    afx_msg void OnClickedStatic107();
    afx_msg void OnClickedStatic108();
    afx_msg void OnClickedStatic109();
    afx_msg void OnClickedStatic110();
    afx_msg void OnClickedStatic111();
    afx_msg void OnClickedStatic112();
    afx_msg void OnClickedStatic113();
    afx_msg void OnClickedStatic114();
    afx_msg void OnClickedStatic115();
    afx_msg void OnClickedStatic116();
    afx_msg void OnClickedStatic117();
    afx_msg void OnClickedStatic118();
    afx_msg void OnClickedStatic119();
    afx_msg void OnClickedStatic120();
    afx_msg void OnClickedStatic121();
    afx_msg void OnClickedStatic122();
    afx_msg void OnClickedStatic123();
    afx_msg void OnClickedStatic124();
    afx_msg void OnClickedStatic125();
    afx_msg void OnClickedStatic126();
    afx_msg void OnClickedStatic127();
    afx_msg void OnClickedStatic128();
    afx_msg void OnClickedStatic129();
    afx_msg void OnClickedStatic130();
    afx_msg void OnClickedStatic131();
    afx_msg void OnClickedStatic200();
    afx_msg void OnClickedStatic201();
    afx_msg void OnClickedStatic202();
    afx_msg void OnClickedStatic203();
    afx_msg void OnClickedStatic204();
    afx_msg void OnClickedStatic205();
    afx_msg void OnClickedStatic206();
    afx_msg void OnClickedStatic207();
    afx_msg void OnClickedStatic208();
    afx_msg void OnClickedStatic209();
    afx_msg void OnClickedStatic210();
    afx_msg void OnClickedStatic211();
    afx_msg void OnClickedStatic212();
    afx_msg void OnClickedStatic213();
    afx_msg void OnClickedStatic214();
    afx_msg void OnClickedStatic215();
    afx_msg void OnClickedStatic216();
    afx_msg void OnClickedStatic217();
    afx_msg void OnClickedStatic218();
    afx_msg void OnClickedStatic219();
    afx_msg void OnClickedStatic220();
    afx_msg void OnClickedStatic221();
    afx_msg void OnClickedStatic222();
    afx_msg void OnClickedStatic223();
    afx_msg void OnClickedStatic224();
    afx_msg void OnClickedStatic225();
    afx_msg void OnClickedStatic226();
    afx_msg void OnClickedStatic227();
    afx_msg void OnClickedStatic228();
    afx_msg void OnClickedStatic229();
    afx_msg void OnClickedStatic230();
    afx_msg void OnClickedStatic231();
    afx_msg void OnClickedStatic300();
    afx_msg void OnClickedStatic301();
    afx_msg void OnClickedStatic302();
    afx_msg void OnClickedStatic303();
    afx_msg void OnClickedStatic304();
    afx_msg void OnClickedStatic305();
    afx_msg void OnClickedStatic306();
    afx_msg void OnClickedStatic307();
    afx_msg void OnClickedStatic308();
    afx_msg void OnClickedStatic309();
    afx_msg void OnClickedStatic310();
    afx_msg void OnClickedStatic311();
    afx_msg void OnClickedStatic312();
    afx_msg void OnClickedStatic313();
    afx_msg void OnClickedStatic314();
    afx_msg void OnClickedStatic315();
    afx_msg void OnClickedStatic316();
    afx_msg void OnClickedStatic317();
    afx_msg void OnClickedStatic318();
    afx_msg void OnClickedStatic319();
    afx_msg void OnClickedStatic320();
    afx_msg void OnClickedStatic321();
    afx_msg void OnClickedStatic322();
    afx_msg void OnClickedStatic323();
    afx_msg void OnClickedStatic324();
    afx_msg void OnClickedStatic325();
    afx_msg void OnClickedStatic326();
    afx_msg void OnClickedStatic327();
    afx_msg void OnClickedStatic328();
    afx_msg void OnClickedStatic329();
    afx_msg void OnClickedStatic330();
    afx_msg void OnClickedStatic331();
    void SetBitSet1(int index);
    void SetBitSet2(int index);
    void SetBitSet3(int index);
    afx_msg void OnBnClickedButton1inv();
    void BitAr1Show(void);
    void BitAr2Show(void);
    void BitAr3Show(void);
    afx_msg void OnBnClickedButton1clear();
    afx_msg void OnBnClickedButton1left();
    afx_msg void OnBnClickedButton1right();
    afx_msg void OnBnClickedButton2inv();
    afx_msg void OnBnClickedButton2clear();
    afx_msg void OnBnClickedButton2left();
    afx_msg void OnBnClickedButton2right();
    afx_msg void OnBnClickedButton3inv();
    afx_msg void OnBnClickedButton3clear();
    afx_msg void OnBnClickedButton3left();
    afx_msg void OnBnClickedButton3right();
    int m_operation;
    int m_notation;
    DWORD BitSet3Calc(void);
    afx_msg void OnBnClickedRadio1not();
    afx_msg void OnBnClickedRadio1and();
    afx_msg void OnBnClickedRadio1or();
    afx_msg void OnBnClickedRadio1xor();
    afx_msg void OnBnClickedRadio2hex();
    afx_msg void OnBnClickedRadio2dec();
    afx_msg void OnBnClickedRadio10();
	void ShowEdit1(void) const;
	void ShowEdit2(void) const;
	void ShowEdit3(void) const;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	virtual void Serialize(CArchive& ar);
//	virtual void OnFinalRelease();
	virtual void OnCancel();
	void Store(void);
	void Restore(void);
	virtual void OnOK();
	bool m_separate;
//    afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};
