
// Week7(2).h : Week7(2) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek72App:
// �йش����ʵ�֣������ Week7(2).cpp
//

class CWeek72App : public CWinApp
{
public:
	CWeek72App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek72App theApp;
