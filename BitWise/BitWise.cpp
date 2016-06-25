
// BitWise.cpp : Определяет поведение классов для приложения.
//

#include "stdafx.h"
#include "BitWise.h"
#include "BitWiseDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBitWiseApp

BEGIN_MESSAGE_MAP(CBitWiseApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// создание CBitWiseApp

CBitWiseApp::CBitWiseApp()
{
	// TODO: добавьте код создания,
	// Размещает весь важный код инициализации в InitInstance
}


// Единственный объект CBitWiseApp

CBitWiseApp theApp;


// инициализация CBitWiseApp

BOOL CBitWiseApp::InitInstance()
{
	CWinApp::InitInstance();


	// Создать диспетчер оболочки, в случае, если диалоговое окно содержит
	// представление дерева оболочки или какие-либо его элементы управления.
	CShellManager *pShellManager = new CShellManager;

	// Стандартная инициализация
	// Если эти возможности не используются и необходимо уменьшить размер
	// конечного исполняемого файла, необходимо удалить из следующих
	// конкретных процедур инициализации, которые не требуются
	// Измените раздел реестра, в котором хранятся параметры
	// TODO: следует изменить эту строку на что-нибудь подходящее,
	// например на название организации
	SetRegistryKey(_T("BitWise by USV"));

	CBitWiseDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Введите код для обработки закрытия диалогового окна
		//  с помощью кнопки "ОК"
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Введите код для обработки закрытия диалогового окна
		//  с помощью кнопки "Отмена"
	}

	// Удалить диспетчер оболочки, созданный выше.
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}

	// Поскольку диалоговое окно закрыто, возвратите значение FALSE, чтобы можно было выйти из
	//  приложения вместо запуска генератора сообщений приложения.
	return FALSE;
}

