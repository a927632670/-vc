// Mydlg2.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Week14.h"
#include "Mydlg2.h"
#include "afxdialogex.h"


// Mydlg2 �Ի���

IMPLEMENT_DYNAMIC(Mydlg2, CDialogEx)

Mydlg2::Mydlg2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, x(_T(""))
{

}

Mydlg2::~Mydlg2()
{
}

void Mydlg2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
}


BEGIN_MESSAGE_MAP(Mydlg2, CDialogEx)
END_MESSAGE_MAP()


// Mydlg2 ��Ϣ�������
