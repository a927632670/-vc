
// Week7(2)View.cpp : CWeek72View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week7(2).h"
#endif

#include "Week7(2)Doc.h"
#include "Week7(2)View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek72View

IMPLEMENT_DYNCREATE(CWeek72View, CView)

BEGIN_MESSAGE_MAP(CWeek72View, CView)
//	ON_BN_CLICKED(IDC_BUTTON1, &CWeek72View::OnBnClickedButton1)
	ON_COMMAND(ID_VIEW, &CWeek72View::OnView)
END_MESSAGE_MAP()

// CWeek72View ����/����

CWeek72View::CWeek72View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek72View::~CWeek72View()
{
}

BOOL CWeek72View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek72View ����

void CWeek72View::OnDraw(CDC* /*pDC*/)
{
	CWeek72Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek72View ���

#ifdef _DEBUG
void CWeek72View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek72View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek72Doc* CWeek72View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek72Doc)));
	return (CWeek72Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek72View ��Ϣ�������


/*void CWeek72View::OnBnClickedButton1()
{
	MyDlg dlg;
	this->UpdateData(true);
	CString s;
	s = dlg.x;
	dlg.x = dlg.y;
	dlg.y = s;


	// TODO: �ڴ���ӿؼ�֪ͨ����������
}*/


void CWeek72View::OnView()
{
	MyDlg dlg;
	int t = dlg.DoModal();
	// TODO: �ڴ���������������
}
