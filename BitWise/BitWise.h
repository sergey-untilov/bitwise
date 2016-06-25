
// BitWise.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// CBitWiseApp:
// � ���������� ������� ������ ��. BitWise.cpp
//
enum bw_notation { BW_HEX = 0, BW_DEC = 1, BW_ORD = 2 };
enum bw_operation { BW_NOT = 0, BW_AND = 1, BW_OR = 2, BW_XOR = 3 };

class CBitWiseApp : public CWinApp
{
public:
	CBitWiseApp();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern CBitWiseApp theApp;