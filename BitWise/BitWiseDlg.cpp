
// BitWiseDlg.cpp : файл реализации
//

#include "stdafx.h"
#include "BitWise.h"
#include "BitWiseDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

const wchar_t *fileName = _T("BitWise.bwd");

// Диалоговое окно CAboutDlg используется для описания сведений о приложении

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Данные диалогового окна
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

// Реализация
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()

// диалоговое окно CBitWiseDlg

CBitWiseDlg::CBitWiseDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CBitWiseDlg::IDD, pParent)
    ,m_operation(BW_AND)
    ,m_notation(BW_DEC)
	,m_separate(true)
{
    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CBitWiseDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	if( pDX->m_bSaveAndValidate == false )
	{
		DDX_Control(pDX, IDC_STATIC100, m_bitAr1[0] );
		DDX_Control(pDX, IDC_STATIC101, m_bitAr1[1] );
		DDX_Control(pDX, IDC_STATIC102, m_bitAr1[2] );
		DDX_Control(pDX, IDC_STATIC103, m_bitAr1[3] );
		DDX_Control(pDX, IDC_STATIC104, m_bitAr1[4] );
		DDX_Control(pDX, IDC_STATIC105, m_bitAr1[5] );
		DDX_Control(pDX, IDC_STATIC106, m_bitAr1[6] );
		DDX_Control(pDX, IDC_STATIC107, m_bitAr1[7] );
		DDX_Control(pDX, IDC_STATIC108, m_bitAr1[8] );
		DDX_Control(pDX, IDC_STATIC109, m_bitAr1[9] );
		DDX_Control(pDX, IDC_STATIC110, m_bitAr1[10] );
		DDX_Control(pDX, IDC_STATIC111, m_bitAr1[11] );
		DDX_Control(pDX, IDC_STATIC112, m_bitAr1[12] );
		DDX_Control(pDX, IDC_STATIC113, m_bitAr1[13] );
		DDX_Control(pDX, IDC_STATIC114, m_bitAr1[14] );
		DDX_Control(pDX, IDC_STATIC115, m_bitAr1[15] );
		DDX_Control(pDX, IDC_STATIC116, m_bitAr1[16] );
		DDX_Control(pDX, IDC_STATIC117, m_bitAr1[17] );
		DDX_Control(pDX, IDC_STATIC118, m_bitAr1[18] );
		DDX_Control(pDX, IDC_STATIC119, m_bitAr1[19] );
		DDX_Control(pDX, IDC_STATIC120, m_bitAr1[20] );
		DDX_Control(pDX, IDC_STATIC121, m_bitAr1[21] );
		DDX_Control(pDX, IDC_STATIC122, m_bitAr1[22] );
		DDX_Control(pDX, IDC_STATIC123, m_bitAr1[23] );
		DDX_Control(pDX, IDC_STATIC124, m_bitAr1[24] );
		DDX_Control(pDX, IDC_STATIC125, m_bitAr1[25] );
		DDX_Control(pDX, IDC_STATIC126, m_bitAr1[26] );
		DDX_Control(pDX, IDC_STATIC127, m_bitAr1[27] );
		DDX_Control(pDX, IDC_STATIC128, m_bitAr1[28] );
		DDX_Control(pDX, IDC_STATIC129, m_bitAr1[29] );
		DDX_Control(pDX, IDC_STATIC130, m_bitAr1[30] );
		DDX_Control(pDX, IDC_STATIC131, m_bitAr1[31] );

		DDX_Control(pDX, IDC_STATIC200, m_bitAr2[0] );
		DDX_Control(pDX, IDC_STATIC201, m_bitAr2[1] );
		DDX_Control(pDX, IDC_STATIC202, m_bitAr2[2] );
		DDX_Control(pDX, IDC_STATIC203, m_bitAr2[3] );
		DDX_Control(pDX, IDC_STATIC204, m_bitAr2[4] );
		DDX_Control(pDX, IDC_STATIC205, m_bitAr2[5] );
		DDX_Control(pDX, IDC_STATIC206, m_bitAr2[6] );
		DDX_Control(pDX, IDC_STATIC207, m_bitAr2[7] );
		DDX_Control(pDX, IDC_STATIC208, m_bitAr2[8] );
		DDX_Control(pDX, IDC_STATIC209, m_bitAr2[9] );
		DDX_Control(pDX, IDC_STATIC210, m_bitAr2[10] );
		DDX_Control(pDX, IDC_STATIC211, m_bitAr2[11] );
		DDX_Control(pDX, IDC_STATIC212, m_bitAr2[12] );
		DDX_Control(pDX, IDC_STATIC213, m_bitAr2[13] );
		DDX_Control(pDX, IDC_STATIC214, m_bitAr2[14] );
		DDX_Control(pDX, IDC_STATIC215, m_bitAr2[15] );
		DDX_Control(pDX, IDC_STATIC216, m_bitAr2[16] );
		DDX_Control(pDX, IDC_STATIC217, m_bitAr2[17] );
		DDX_Control(pDX, IDC_STATIC218, m_bitAr2[18] );
		DDX_Control(pDX, IDC_STATIC219, m_bitAr2[19] );
		DDX_Control(pDX, IDC_STATIC220, m_bitAr2[20] );
		DDX_Control(pDX, IDC_STATIC221, m_bitAr2[21] );
		DDX_Control(pDX, IDC_STATIC222, m_bitAr2[22] );
		DDX_Control(pDX, IDC_STATIC223, m_bitAr2[23] );
		DDX_Control(pDX, IDC_STATIC224, m_bitAr2[24] );
		DDX_Control(pDX, IDC_STATIC225, m_bitAr2[25] );
		DDX_Control(pDX, IDC_STATIC226, m_bitAr2[26] );
		DDX_Control(pDX, IDC_STATIC227, m_bitAr2[27] );
		DDX_Control(pDX, IDC_STATIC228, m_bitAr2[28] );
		DDX_Control(pDX, IDC_STATIC229, m_bitAr2[29] );
		DDX_Control(pDX, IDC_STATIC230, m_bitAr2[30] );
		DDX_Control(pDX, IDC_STATIC231, m_bitAr2[31] );

		DDX_Control(pDX, IDC_STATIC300, m_bitAr3[0] );
		DDX_Control(pDX, IDC_STATIC301, m_bitAr3[1] );
		DDX_Control(pDX, IDC_STATIC302, m_bitAr3[2] );
		DDX_Control(pDX, IDC_STATIC303, m_bitAr3[3] );
		DDX_Control(pDX, IDC_STATIC304, m_bitAr3[4] );
		DDX_Control(pDX, IDC_STATIC305, m_bitAr3[5] );
		DDX_Control(pDX, IDC_STATIC306, m_bitAr3[6] );
		DDX_Control(pDX, IDC_STATIC307, m_bitAr3[7] );
		DDX_Control(pDX, IDC_STATIC308, m_bitAr3[8] );
		DDX_Control(pDX, IDC_STATIC309, m_bitAr3[9] );
		DDX_Control(pDX, IDC_STATIC310, m_bitAr3[10] );
		DDX_Control(pDX, IDC_STATIC311, m_bitAr3[11] );
		DDX_Control(pDX, IDC_STATIC312, m_bitAr3[12] );
		DDX_Control(pDX, IDC_STATIC313, m_bitAr3[13] );
		DDX_Control(pDX, IDC_STATIC314, m_bitAr3[14] );
		DDX_Control(pDX, IDC_STATIC315, m_bitAr3[15] );
		DDX_Control(pDX, IDC_STATIC316, m_bitAr3[16] );
		DDX_Control(pDX, IDC_STATIC317, m_bitAr3[17] );
		DDX_Control(pDX, IDC_STATIC318, m_bitAr3[18] );
		DDX_Control(pDX, IDC_STATIC319, m_bitAr3[19] );
		DDX_Control(pDX, IDC_STATIC320, m_bitAr3[20] );
		DDX_Control(pDX, IDC_STATIC321, m_bitAr3[21] );
		DDX_Control(pDX, IDC_STATIC322, m_bitAr3[22] );
		DDX_Control(pDX, IDC_STATIC323, m_bitAr3[23] );
		DDX_Control(pDX, IDC_STATIC324, m_bitAr3[24] );
		DDX_Control(pDX, IDC_STATIC325, m_bitAr3[25] );
		DDX_Control(pDX, IDC_STATIC326, m_bitAr3[26] );
		DDX_Control(pDX, IDC_STATIC327, m_bitAr3[27] );
		DDX_Control(pDX, IDC_STATIC328, m_bitAr3[28] );
		DDX_Control(pDX, IDC_STATIC329, m_bitAr3[29] );
		DDX_Control(pDX, IDC_STATIC330, m_bitAr3[30] );
		DDX_Control(pDX, IDC_STATIC331, m_bitAr3[31] );
	}
	DDX_Radio(pDX, IDC_RADIO1NOT, m_operation);
	DDX_Radio(pDX, IDC_RADIO2Hex, m_notation);
}

BEGIN_MESSAGE_MAP(CBitWiseDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
    ON_STN_CLICKED(IDC_STATIC100, &CBitWiseDlg::OnStnClickedStatic100)
    ON_STN_CLICKED(IDC_STATIC101, &CBitWiseDlg::OnClickedStatic101)
    ON_STN_CLICKED(IDC_STATIC102, &CBitWiseDlg::OnClickedStatic102)
    ON_STN_CLICKED(IDC_STATIC103, &CBitWiseDlg::OnClickedStatic103)
    ON_STN_CLICKED(IDC_STATIC104, &CBitWiseDlg::OnClickedStatic104)
    ON_STN_CLICKED(IDC_STATIC105, &CBitWiseDlg::OnClickedStatic105)
    ON_STN_CLICKED(IDC_STATIC106, &CBitWiseDlg::OnClickedStatic106)
    ON_STN_CLICKED(IDC_STATIC107, &CBitWiseDlg::OnClickedStatic107)
    ON_STN_CLICKED(IDC_STATIC108, &CBitWiseDlg::OnClickedStatic108)
    ON_STN_CLICKED(IDC_STATIC109, &CBitWiseDlg::OnClickedStatic109)
    ON_STN_CLICKED(IDC_STATIC110, &CBitWiseDlg::OnClickedStatic110)
    ON_STN_CLICKED(IDC_STATIC111, &CBitWiseDlg::OnClickedStatic111)
    ON_STN_CLICKED(IDC_STATIC112, &CBitWiseDlg::OnClickedStatic112)
    ON_STN_CLICKED(IDC_STATIC113, &CBitWiseDlg::OnClickedStatic113)
    ON_STN_CLICKED(IDC_STATIC114, &CBitWiseDlg::OnClickedStatic114)
    ON_STN_CLICKED(IDC_STATIC115, &CBitWiseDlg::OnClickedStatic115)
    ON_STN_CLICKED(IDC_STATIC116, &CBitWiseDlg::OnClickedStatic116)
    ON_STN_CLICKED(IDC_STATIC117, &CBitWiseDlg::OnClickedStatic117)
    ON_STN_CLICKED(IDC_STATIC118, &CBitWiseDlg::OnClickedStatic118)
    ON_STN_CLICKED(IDC_STATIC119, &CBitWiseDlg::OnClickedStatic119)
    ON_STN_CLICKED(IDC_STATIC120, &CBitWiseDlg::OnClickedStatic120)
    ON_STN_CLICKED(IDC_STATIC121, &CBitWiseDlg::OnClickedStatic121)
    ON_STN_CLICKED(IDC_STATIC122, &CBitWiseDlg::OnClickedStatic122)
    ON_STN_CLICKED(IDC_STATIC123, &CBitWiseDlg::OnClickedStatic123)
    ON_STN_CLICKED(IDC_STATIC124, &CBitWiseDlg::OnClickedStatic124)
    ON_STN_CLICKED(IDC_STATIC125, &CBitWiseDlg::OnClickedStatic125)
    ON_STN_CLICKED(IDC_STATIC126, &CBitWiseDlg::OnClickedStatic126)
    ON_STN_CLICKED(IDC_STATIC127, &CBitWiseDlg::OnClickedStatic127)
    ON_STN_CLICKED(IDC_STATIC128, &CBitWiseDlg::OnClickedStatic128)
    ON_STN_CLICKED(IDC_STATIC129, &CBitWiseDlg::OnClickedStatic129)
    ON_STN_CLICKED(IDC_STATIC130, &CBitWiseDlg::OnClickedStatic130)
    ON_STN_CLICKED(IDC_STATIC131, &CBitWiseDlg::OnClickedStatic131)
    ON_STN_CLICKED(IDC_STATIC200, &CBitWiseDlg::OnClickedStatic200)
    ON_STN_CLICKED(IDC_STATIC201, &CBitWiseDlg::OnClickedStatic201)
    ON_STN_CLICKED(IDC_STATIC202, &CBitWiseDlg::OnClickedStatic202)
    ON_STN_CLICKED(IDC_STATIC203, &CBitWiseDlg::OnClickedStatic203)
    ON_STN_CLICKED(IDC_STATIC204, &CBitWiseDlg::OnClickedStatic204)
    ON_STN_CLICKED(IDC_STATIC205, &CBitWiseDlg::OnClickedStatic205)
    ON_STN_CLICKED(IDC_STATIC206, &CBitWiseDlg::OnClickedStatic206)
    ON_STN_CLICKED(IDC_STATIC207, &CBitWiseDlg::OnClickedStatic207)
    ON_STN_CLICKED(IDC_STATIC208, &CBitWiseDlg::OnClickedStatic208)
    ON_STN_CLICKED(IDC_STATIC209, &CBitWiseDlg::OnClickedStatic209)
    ON_STN_CLICKED(IDC_STATIC210, &CBitWiseDlg::OnClickedStatic210)
    ON_STN_CLICKED(IDC_STATIC211, &CBitWiseDlg::OnClickedStatic211)
    ON_STN_CLICKED(IDC_STATIC212, &CBitWiseDlg::OnClickedStatic212)
    ON_STN_CLICKED(IDC_STATIC213, &CBitWiseDlg::OnClickedStatic213)
    ON_STN_CLICKED(IDC_STATIC214, &CBitWiseDlg::OnClickedStatic214)
    ON_STN_CLICKED(IDC_STATIC215, &CBitWiseDlg::OnClickedStatic215)
    ON_STN_CLICKED(IDC_STATIC216, &CBitWiseDlg::OnClickedStatic216)
    ON_STN_CLICKED(IDC_STATIC217, &CBitWiseDlg::OnClickedStatic217)
    ON_STN_CLICKED(IDC_STATIC218, &CBitWiseDlg::OnClickedStatic218)
    ON_STN_CLICKED(IDC_STATIC219, &CBitWiseDlg::OnClickedStatic219)
    ON_STN_CLICKED(IDC_STATIC220, &CBitWiseDlg::OnClickedStatic220)
    ON_STN_CLICKED(IDC_STATIC221, &CBitWiseDlg::OnClickedStatic221)
    ON_STN_CLICKED(IDC_STATIC222, &CBitWiseDlg::OnClickedStatic222)
    ON_STN_CLICKED(IDC_STATIC223, &CBitWiseDlg::OnClickedStatic223)
    ON_STN_CLICKED(IDC_STATIC224, &CBitWiseDlg::OnClickedStatic224)
    ON_STN_CLICKED(IDC_STATIC225, &CBitWiseDlg::OnClickedStatic225)
    ON_STN_CLICKED(IDC_STATIC226, &CBitWiseDlg::OnClickedStatic226)
    ON_STN_CLICKED(IDC_STATIC227, &CBitWiseDlg::OnClickedStatic227)
    ON_STN_CLICKED(IDC_STATIC228, &CBitWiseDlg::OnClickedStatic228)
    ON_STN_CLICKED(IDC_STATIC229, &CBitWiseDlg::OnClickedStatic229)
    ON_STN_CLICKED(IDC_STATIC230, &CBitWiseDlg::OnClickedStatic230)
    ON_STN_CLICKED(IDC_STATIC231, &CBitWiseDlg::OnClickedStatic231)
    ON_STN_CLICKED(IDC_STATIC300, &CBitWiseDlg::OnClickedStatic300)
    ON_STN_CLICKED(IDC_STATIC301, &CBitWiseDlg::OnClickedStatic301)
    ON_STN_CLICKED(IDC_STATIC302, &CBitWiseDlg::OnClickedStatic302)
    ON_STN_CLICKED(IDC_STATIC303, &CBitWiseDlg::OnClickedStatic303)
    ON_STN_CLICKED(IDC_STATIC304, &CBitWiseDlg::OnClickedStatic304)
    ON_STN_CLICKED(IDC_STATIC305, &CBitWiseDlg::OnClickedStatic305)
    ON_STN_CLICKED(IDC_STATIC306, &CBitWiseDlg::OnClickedStatic306)
    ON_STN_CLICKED(IDC_STATIC307, &CBitWiseDlg::OnClickedStatic307)
    ON_STN_CLICKED(IDC_STATIC308, &CBitWiseDlg::OnClickedStatic308)
    ON_STN_CLICKED(IDC_STATIC309, &CBitWiseDlg::OnClickedStatic309)
    ON_STN_CLICKED(IDC_STATIC310, &CBitWiseDlg::OnClickedStatic310)
    ON_STN_CLICKED(IDC_STATIC311, &CBitWiseDlg::OnClickedStatic311)
    ON_STN_CLICKED(IDC_STATIC312, &CBitWiseDlg::OnClickedStatic312)
    ON_STN_CLICKED(IDC_STATIC313, &CBitWiseDlg::OnClickedStatic313)
    ON_STN_CLICKED(IDC_STATIC314, &CBitWiseDlg::OnClickedStatic314)
    ON_STN_CLICKED(IDC_STATIC315, &CBitWiseDlg::OnClickedStatic315)
    ON_STN_CLICKED(IDC_STATIC316, &CBitWiseDlg::OnClickedStatic316)
    ON_STN_CLICKED(IDC_STATIC317, &CBitWiseDlg::OnClickedStatic317)
    ON_STN_CLICKED(IDC_STATIC318, &CBitWiseDlg::OnClickedStatic318)
    ON_STN_CLICKED(IDC_STATIC319, &CBitWiseDlg::OnClickedStatic319)
    ON_STN_CLICKED(IDC_STATIC320, &CBitWiseDlg::OnClickedStatic320)
    ON_STN_CLICKED(IDC_STATIC321, &CBitWiseDlg::OnClickedStatic321)
    ON_STN_CLICKED(IDC_STATIC322, &CBitWiseDlg::OnClickedStatic322)
    ON_STN_CLICKED(IDC_STATIC323, &CBitWiseDlg::OnClickedStatic323)
    ON_STN_CLICKED(IDC_STATIC324, &CBitWiseDlg::OnClickedStatic324)
    ON_STN_CLICKED(IDC_STATIC325, &CBitWiseDlg::OnClickedStatic325)
    ON_STN_CLICKED(IDC_STATIC326, &CBitWiseDlg::OnClickedStatic326)
    ON_STN_CLICKED(IDC_STATIC327, &CBitWiseDlg::OnClickedStatic327)
    ON_STN_CLICKED(IDC_STATIC328, &CBitWiseDlg::OnClickedStatic328)
    ON_STN_CLICKED(IDC_STATIC329, &CBitWiseDlg::OnClickedStatic329)
    ON_STN_CLICKED(IDC_STATIC330, &CBitWiseDlg::OnClickedStatic330)
    ON_STN_CLICKED(IDC_STATIC331, &CBitWiseDlg::OnClickedStatic331)
    ON_BN_CLICKED(IDC_BUTTON1Inv, &CBitWiseDlg::OnBnClickedButton1inv)
    ON_BN_CLICKED(IDC_BUTTON1Clear, &CBitWiseDlg::OnBnClickedButton1clear)
    ON_BN_CLICKED(IDC_BUTTON1Left, &CBitWiseDlg::OnBnClickedButton1left)
    ON_BN_CLICKED(IDC_BUTTON1Right, &CBitWiseDlg::OnBnClickedButton1right)
    ON_BN_CLICKED(IDC_BUTTON2Inv, &CBitWiseDlg::OnBnClickedButton2inv)
    ON_BN_CLICKED(IDC_BUTTON2Clear, &CBitWiseDlg::OnBnClickedButton2clear)
    ON_BN_CLICKED(IDC_BUTTON2Left, &CBitWiseDlg::OnBnClickedButton2left)
    ON_BN_CLICKED(IDC_BUTTON2Right, &CBitWiseDlg::OnBnClickedButton2right)
    ON_BN_CLICKED(IDC_BUTTON3Inv, &CBitWiseDlg::OnBnClickedButton3inv)
    ON_BN_CLICKED(IDC_BUTTON3Clear, &CBitWiseDlg::OnBnClickedButton3clear)
    ON_BN_CLICKED(IDC_BUTTON3Left, &CBitWiseDlg::OnBnClickedButton3left)
    ON_BN_CLICKED(IDC_BUTTON3Right, &CBitWiseDlg::OnBnClickedButton3right)
    ON_BN_CLICKED(IDC_RADIO1NOT, &CBitWiseDlg::OnBnClickedRadio1not)
    ON_BN_CLICKED(IDC_RADIO1AND, &CBitWiseDlg::OnBnClickedRadio1and)
    ON_BN_CLICKED(IDC_RADIO1OR, &CBitWiseDlg::OnBnClickedRadio1or)
    ON_BN_CLICKED(IDC_RADIO1XOR, &CBitWiseDlg::OnBnClickedRadio1xor)
    ON_BN_CLICKED(IDC_RADIO2Hex, &CBitWiseDlg::OnBnClickedRadio2hex)
    ON_BN_CLICKED(IDC_RADIO2Dec, &CBitWiseDlg::OnBnClickedRadio2dec)
    ON_BN_CLICKED(IDC_RADIO10, &CBitWiseDlg::OnBnClickedRadio10)
	ON_EN_CHANGE(IDC_EDIT1, &CBitWiseDlg::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &CBitWiseDlg::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &CBitWiseDlg::OnEnChangeEdit3)
//    ON_WM_LBUTTONUP()
    END_MESSAGE_MAP()

// обработчики сообщений CBitWiseDlg

BOOL CBitWiseDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Добавление пункта "О программе..." в системное меню.

	// IDM_ABOUTBOX должен быть в пределах системной команды.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Задает значок для этого диалогового окна. Среда делает это автоматически,
	//  если главное окно приложения не является диалоговым
	SetIcon(m_hIcon, TRUE);			// Крупный значок
	SetIcon(m_hIcon, FALSE);		// Мелкий значок

	// TODO: добавьте дополнительную инициализацию
	
	Restore();
	UpdateData( FALSE );

	 m_edit1 = GetDlgItem(IDC_EDIT1);
	 ASSERT(m_edit1!=NULL); 
	 m_edit2 = GetDlgItem(IDC_EDIT2);
	 ASSERT(m_edit2!=NULL);
	 m_edit3 = GetDlgItem(IDC_EDIT3);
	 ASSERT(m_edit3!=NULL);

	BitAr1Show();
    BitAr2Show();
	BitAr3Show();
	ShowEdit1();
	ShowEdit2();
	ShowEdit3();

	return TRUE;  // возврат значения TRUE, если фокус не передан элементу управления
}

void CBitWiseDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// При добавлении кнопки свертывания в диалоговое окно нужно воспользоваться приведенным ниже кодом,
//  чтобы нарисовать значок. Для приложений MFC, использующих модель документов или представлений,
//  это автоматически выполняется рабочей областью.

void CBitWiseDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // контекст устройства для рисования

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Выравнивание значка по центру клиентского прямоугольника
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Нарисуйте значок
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// Система вызывает эту функцию для получения отображения курсора при перемещении
//  свернутого окна.
HCURSOR CBitWiseDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CBitWiseDlg::OnStnClickedStatic100()
{
    SetBitSet1( 0 );
}
void CBitWiseDlg::OnClickedStatic101()
{
    SetBitSet1( 1 );
}
void CBitWiseDlg::OnClickedStatic102()
{
    SetBitSet1( 2 );
}
void CBitWiseDlg::OnClickedStatic103()
{
    SetBitSet1( 3 );
}
void CBitWiseDlg::OnClickedStatic104()
{
    SetBitSet1( 4 );
}
void CBitWiseDlg::OnClickedStatic105()
{
    SetBitSet1( 5 );
}
void CBitWiseDlg::OnClickedStatic106()
{
    SetBitSet1( 6 );
}
void CBitWiseDlg::OnClickedStatic107()
{
    SetBitSet1( 7 );
}
void CBitWiseDlg::OnClickedStatic108()
{
    SetBitSet1( 8 );
}
void CBitWiseDlg::OnClickedStatic109()
{
    SetBitSet1( 9 );
}
void CBitWiseDlg::OnClickedStatic110()
{
    SetBitSet1( 10 );
}
void CBitWiseDlg::OnClickedStatic111()
{
    SetBitSet1( 11 );
}
void CBitWiseDlg::OnClickedStatic112()
{
    SetBitSet1( 12 );
}
void CBitWiseDlg::OnClickedStatic113()
{
    SetBitSet1( 13 );
}
void CBitWiseDlg::OnClickedStatic114()
{
    SetBitSet1( 14 );
}
void CBitWiseDlg::OnClickedStatic115()
{
    SetBitSet1( 15 );
}
void CBitWiseDlg::OnClickedStatic116()
{
    SetBitSet1( 16 );
}
void CBitWiseDlg::OnClickedStatic117()
{
    SetBitSet1( 17 );
}
void CBitWiseDlg::OnClickedStatic118()
{
    SetBitSet1( 18 );
}
void CBitWiseDlg::OnClickedStatic119()
{
    SetBitSet1( 19 );
}
void CBitWiseDlg::OnClickedStatic120()
{
    SetBitSet1( 20 );
}
void CBitWiseDlg::OnClickedStatic121()
{
    SetBitSet1( 21 );
}
void CBitWiseDlg::OnClickedStatic122()
{
    SetBitSet1( 22 );
}
void CBitWiseDlg::OnClickedStatic123()
{
    SetBitSet1( 23 );
}
void CBitWiseDlg::OnClickedStatic124()
{
    SetBitSet1( 24 );
}
void CBitWiseDlg::OnClickedStatic125()
{
    SetBitSet1( 25 );
}
void CBitWiseDlg::OnClickedStatic126()
{
    SetBitSet1( 26 );
}
void CBitWiseDlg::OnClickedStatic127()
{
    SetBitSet1( 27 );
}
void CBitWiseDlg::OnClickedStatic128()
{
    SetBitSet1( 28 );
}
void CBitWiseDlg::OnClickedStatic129()
{
    SetBitSet1( 29 );
}
void CBitWiseDlg::OnClickedStatic130()
{
    SetBitSet1( 30 );
}
void CBitWiseDlg::OnClickedStatic131()
{
    SetBitSet1( 31 );
}

void CBitWiseDlg::OnClickedStatic200()
{
    SetBitSet2( 0 );
}
void CBitWiseDlg::OnClickedStatic201()
{
    SetBitSet2( 1 );
}
void CBitWiseDlg::OnClickedStatic202()
{
    SetBitSet2( 2 );
}
void CBitWiseDlg::OnClickedStatic203()
{
    SetBitSet2( 3 );
}
void CBitWiseDlg::OnClickedStatic204()
{
    SetBitSet2( 4 );
}
void CBitWiseDlg::OnClickedStatic205()
{
    SetBitSet2( 5 );
}
void CBitWiseDlg::OnClickedStatic206()
{
    SetBitSet2( 6 );
}
void CBitWiseDlg::OnClickedStatic207()
{
    SetBitSet2( 7 );
}
void CBitWiseDlg::OnClickedStatic208()
{
    SetBitSet2( 8 );
}
void CBitWiseDlg::OnClickedStatic209()
{
    SetBitSet2( 9 );
}
void CBitWiseDlg::OnClickedStatic210()
{
    SetBitSet2( 10 );
}
void CBitWiseDlg::OnClickedStatic211()
{
    SetBitSet2( 11 );
}
void CBitWiseDlg::OnClickedStatic212()
{
    SetBitSet2( 12 );
}
void CBitWiseDlg::OnClickedStatic213()
{
    SetBitSet2( 13 );
}
void CBitWiseDlg::OnClickedStatic214()
{
    SetBitSet2( 14 );
}
void CBitWiseDlg::OnClickedStatic215()
{
    SetBitSet2( 15 );
}
void CBitWiseDlg::OnClickedStatic216()
{
    SetBitSet2( 16 );
}
void CBitWiseDlg::OnClickedStatic217()
{
    SetBitSet2( 17 );
}
void CBitWiseDlg::OnClickedStatic218()
{
    SetBitSet2( 18 );
}
void CBitWiseDlg::OnClickedStatic219()
{
    SetBitSet2( 19 );
}
void CBitWiseDlg::OnClickedStatic220()
{
    SetBitSet2( 20 );
}
void CBitWiseDlg::OnClickedStatic221()
{
    SetBitSet2( 21 );
}
void CBitWiseDlg::OnClickedStatic222()
{
    SetBitSet2( 22 );
}
void CBitWiseDlg::OnClickedStatic223()
{
    SetBitSet2( 23 );
}
void CBitWiseDlg::OnClickedStatic224()
{
    SetBitSet2( 24 );
}
void CBitWiseDlg::OnClickedStatic225()
{
    SetBitSet2( 25 );
}
void CBitWiseDlg::OnClickedStatic226()
{
    SetBitSet2( 26 );
}
void CBitWiseDlg::OnClickedStatic227()
{
    SetBitSet2( 27 );
}
void CBitWiseDlg::OnClickedStatic228()
{
    SetBitSet2( 28 );
}
void CBitWiseDlg::OnClickedStatic229()
{
    SetBitSet2( 29 );
}
void CBitWiseDlg::OnClickedStatic230()
{
    SetBitSet2( 30 );
}
void CBitWiseDlg::OnClickedStatic231()
{
    SetBitSet2( 31 );
}

void CBitWiseDlg::OnClickedStatic300()
{
    SetBitSet3( 0 );
}
void CBitWiseDlg::OnClickedStatic301()
{
    SetBitSet3( 1 );
}
void CBitWiseDlg::OnClickedStatic302()
{
    SetBitSet3( 2 );
}
void CBitWiseDlg::OnClickedStatic303()
{
    SetBitSet3( 3 );
}
void CBitWiseDlg::OnClickedStatic304()
{
    SetBitSet3( 4 );
}
void CBitWiseDlg::OnClickedStatic305()
{
    SetBitSet3( 5 );
}
void CBitWiseDlg::OnClickedStatic306()
{
    SetBitSet3( 6 );
}
void CBitWiseDlg::OnClickedStatic307()
{
    SetBitSet3( 7 );
}
void CBitWiseDlg::OnClickedStatic308()
{
    SetBitSet3( 8 );
}
void CBitWiseDlg::OnClickedStatic309()
{
    SetBitSet3( 9 );
}
void CBitWiseDlg::OnClickedStatic310()
{
    SetBitSet3( 10 );
}
void CBitWiseDlg::OnClickedStatic311()
{
    SetBitSet3( 11 );
}
void CBitWiseDlg::OnClickedStatic312()
{
    SetBitSet3( 12 );
}
void CBitWiseDlg::OnClickedStatic313()
{
    SetBitSet3( 13 );
}
void CBitWiseDlg::OnClickedStatic314()
{
    SetBitSet3( 14 );
}
void CBitWiseDlg::OnClickedStatic315()
{
    SetBitSet3( 15 );
}
void CBitWiseDlg::OnClickedStatic316()
{
    SetBitSet3( 16 );
}
void CBitWiseDlg::OnClickedStatic317()
{
    SetBitSet3( 17 );
}
void CBitWiseDlg::OnClickedStatic318()
{
    SetBitSet3( 18 );
}
void CBitWiseDlg::OnClickedStatic319()
{
    SetBitSet3( 19 );
}
void CBitWiseDlg::OnClickedStatic320()
{
    SetBitSet3( 20 );
}
void CBitWiseDlg::OnClickedStatic321()
{
    SetBitSet3( 21 );
}
void CBitWiseDlg::OnClickedStatic322()
{
    SetBitSet3( 22 );
}
void CBitWiseDlg::OnClickedStatic323()
{
    SetBitSet3( 23 );
}
void CBitWiseDlg::OnClickedStatic324()
{
    SetBitSet3( 24 );
}
void CBitWiseDlg::OnClickedStatic325()
{
    SetBitSet3( 25 );
}
void CBitWiseDlg::OnClickedStatic326()
{
    SetBitSet3( 26 );
}
void CBitWiseDlg::OnClickedStatic327()
{
    SetBitSet3( 27 );
}
void CBitWiseDlg::OnClickedStatic328()
{
    SetBitSet3( 28 );
}
void CBitWiseDlg::OnClickedStatic329()
{
    SetBitSet3( 29 );
}
void CBitWiseDlg::OnClickedStatic330()
{
    SetBitSet3( 30 );
}
void CBitWiseDlg::OnClickedStatic331()
{
    SetBitSet3( 31 );
}

void CBitWiseDlg::SetBitSet1(int index)
{
    m_bitAr1[ index ].SetState( m_bitset1.SwitchBit( index ) );
    BitSet3Calc();
    BitAr3Show();
	ShowEdit1();
	ShowEdit3();
}
void CBitWiseDlg::SetBitSet2(int index)
{
    m_bitAr2[ index ].SetState( m_bitset2.SwitchBit( index ) );
    BitSet3Calc();
    BitAr3Show();
	ShowEdit2();
	ShowEdit3();
}
void CBitWiseDlg::SetBitSet3(int index)
{
    m_bitAr3[ index ].SetState( m_bitset3.SwitchBit( index ) );
	ShowEdit3();
}

void CBitWiseDlg::OnBnClickedButton1inv()
{
    m_bitset1.Invert();
    BitAr1Show();
    BitSet3Calc();
    BitAr3Show();
	ShowEdit1();
	ShowEdit3();
}

void CBitWiseDlg::BitAr1Show(void)
{
    for( int n = 0; n < 32; n++ )
        m_bitAr1[ n ].SetState( m_bitset1.GetBit( n ) );
}

void CBitWiseDlg::BitAr2Show(void)
{
    for( int n = 0; n < 32; n++ )
        m_bitAr2[ n ].SetState( m_bitset2.GetBit( n ) );
}

void CBitWiseDlg::BitAr3Show(void)
{
    for( int n = 0; n < 32; n++ )
        m_bitAr3[ n ].SetState( m_bitset3.GetBit( n ) );
}

void CBitWiseDlg::OnBnClickedButton1clear()
{
    m_bitset1.Clear();
    BitAr1Show();
    BitSet3Calc();
    BitAr3Show();
	ShowEdit1();
	ShowEdit3();
}

void CBitWiseDlg::OnBnClickedButton1left()
{
    m_bitset1.ShiftLeft();
    BitAr1Show();
    BitSet3Calc();
    BitAr3Show();
	ShowEdit1();
	ShowEdit3();
}

void CBitWiseDlg::OnBnClickedButton1right()
{
    m_bitset1.ShiftRight();
    BitAr1Show();
    BitSet3Calc();
    BitAr3Show();
	ShowEdit1();
	ShowEdit3();
}

void CBitWiseDlg::OnBnClickedButton2inv()
{
    m_bitset2.Invert();
    BitAr2Show();
    BitSet3Calc();
    BitAr3Show();
	ShowEdit2();
	ShowEdit3();
}

void CBitWiseDlg::OnBnClickedButton2clear()
{
    m_bitset2.Clear();
    BitAr2Show();
    BitSet3Calc();
    BitAr3Show();
	ShowEdit2();
	ShowEdit3();
}

void CBitWiseDlg::OnBnClickedButton2left()
{
    m_bitset2.ShiftLeft();
    BitAr2Show();
    BitSet3Calc();
    BitAr3Show();
	ShowEdit2();
	ShowEdit3();
}

void CBitWiseDlg::OnBnClickedButton2right()
{
    m_bitset2.ShiftRight();
    BitAr2Show();
    BitSet3Calc();
    BitAr3Show();
	ShowEdit2();
	ShowEdit3();
}

void CBitWiseDlg::OnBnClickedButton3inv()
{
    m_bitset3.Invert();
    BitAr3Show();
	ShowEdit3();
}

void CBitWiseDlg::OnBnClickedButton3clear()
{
    m_bitset3.Clear();
    BitAr3Show();
	ShowEdit3();
}

void CBitWiseDlg::OnBnClickedButton3left()
{
    m_bitset3.ShiftLeft();
    BitAr3Show();
	ShowEdit3();
}

void CBitWiseDlg::OnBnClickedButton3right()
{
    m_bitset3.ShiftRight();
    BitAr3Show();
	ShowEdit3();
}


DWORD CBitWiseDlg::BitSet3Calc(void)
{
    switch( m_operation )
    {
        case BW_NOT:
            m_bitset3 = m_bitset1 & (~m_bitset2);
            break;
        case BW_AND:
            m_bitset3 = m_bitset1 & m_bitset2;
            break;
        case BW_OR:
            m_bitset3 = m_bitset1 | m_bitset2;
            break;
        case BW_XOR:
            m_bitset3 = m_bitset1 ^ m_bitset2;
            break;
    }
    return m_bitset3.m_bitset;
}

void CBitWiseDlg::OnBnClickedRadio1not()
{
	m_operation = BW_NOT;
    BitSet3Calc();
    BitAr3Show();
	ShowEdit3();
}

void CBitWiseDlg::OnBnClickedRadio1and()
{
	m_operation = BW_AND;
    BitSet3Calc();
    BitAr3Show();
	ShowEdit3();
}

void CBitWiseDlg::OnBnClickedRadio1or()
{
	m_operation = BW_OR;
    BitSet3Calc();
    BitAr3Show();
	ShowEdit3();
}

void CBitWiseDlg::OnBnClickedRadio1xor()
{
	m_operation = BW_XOR;
    BitSet3Calc();
    BitAr3Show();
	ShowEdit3();
}

void CBitWiseDlg::OnBnClickedRadio2hex()
{
	m_notation = BW_HEX;
	ShowEdit1();
	ShowEdit2();
	ShowEdit3();
}

void CBitWiseDlg::OnBnClickedRadio2dec()
{
	m_notation = BW_DEC;
	ShowEdit1();
	ShowEdit2();
	ShowEdit3();
}

void CBitWiseDlg::OnBnClickedRadio10()
{
	m_notation = BW_ORD;
	ShowEdit1();
	ShowEdit2();
	ShowEdit3();
}

void CBitWiseDlg::ShowEdit1(void) const
{
	DWORD b = m_bitset1.GetBitSet();
	CString s = m_bitset1.BitSet2String( b, m_notation, m_separate );
	m_edit1->SetWindowText( s );

}

void CBitWiseDlg::ShowEdit2(void) const
{
	m_edit2->SetWindowText( m_bitset2.BitSet2String( m_bitset2.GetBitSet(), m_notation, m_separate ) );
}

void CBitWiseDlg::ShowEdit3(void) const
{
	m_edit3->SetWindowText( m_bitset3.BitSet2String( m_bitset3.GetBitSet(), m_notation, m_separate ) );
}

void CBitWiseDlg::OnEnChangeEdit1()
{
	CString s;
	m_edit1->GetWindowText( s );
    m_bitset1.SetBitSet( m_bitset1.String2BitSet( s, m_notation ) );
    BitAr1Show();

    BitSet3Calc();
    BitAr3Show();
	ShowEdit3();
}

void CBitWiseDlg::OnEnChangeEdit2()
{
	CString s;
	m_edit2->GetWindowText( s );
    m_bitset2.SetBitSet( m_bitset2.String2BitSet( s, m_notation ) );
    BitAr2Show();

    BitSet3Calc();
    BitAr3Show();
	ShowEdit3();
}

void CBitWiseDlg::OnEnChangeEdit3()
{
	CString s;
	m_edit3->GetWindowText( s );
    m_bitset3.SetBitSet( m_bitset3.String2BitSet( s, m_notation ) );
    BitAr3Show();
}


void CBitWiseDlg::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{	// storing code
		ar << m_operation;
		ar << m_notation;
		m_bitset1.Serialize( ar );
		m_bitset2.Serialize( ar );
		m_bitset3.Serialize( ar );
		ar << m_separate;

	}
	else
	{	// loading code
		ar >> m_operation;
		ar >> m_notation;
		m_bitset1.Serialize( ar );
		m_bitset2.Serialize( ar );
		m_bitset3.Serialize( ar );
		ar >> m_separate;
	}
}

void CBitWiseDlg::Store(void)
{
	// store
	{	
		CFile theFile;
		if( theFile.Open( fileName, CFile::modeCreate | CFile::modeWrite) )
		{
			CArchive archive(&theFile, CArchive::store );
			archive << bw_internal_version;
			Serialize( archive );
			archive.Close();
			theFile.Close();
		}
	}
}

void CBitWiseDlg::Restore(void)
{
	// restore
	CFileStatus status;
	if( CFile::GetStatus( fileName, status ) )
	{	
		CFile theFile;
		if( theFile.Open( fileName, CFile::modeRead ) )
		{
			CArchive archive(&theFile, CArchive::load );
			WORD v;
			archive >> v;
			if( v == bw_internal_version )
			{
				Serialize( archive );
			}
			archive.Close();
			theFile.Close();
			if( v != bw_internal_version )
				CFile::Remove( fileName );
		}
	}
}

void CBitWiseDlg::OnOK()
{
	//Store();
	//CDialogEx::OnOK();
}
void CBitWiseDlg::OnCancel()
{
	Store();
	CDialogEx::OnCancel();
}


//void CBitWiseDlg::OnLButtonUp(UINT nFlags, CPoint point)
//{
//    // TODO: Add your message handler code here and/or call default
//
//    CDialogEx::OnLButtonUp(nFlags, point);
//}
