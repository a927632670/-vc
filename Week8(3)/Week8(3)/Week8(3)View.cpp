
// Week8(3)View.cpp : CWeek83View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week8(3).h"
#endif

#include "Week8(3)Doc.h"
#include "Week8(3)View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek83View

IMPLEMENT_DYNCREATE(CWeek83View, CView)

BEGIN_MESSAGE_MAP(CWeek83View, CView)
	ON_COMMAND(ID_VIEW, &CWeek83View::OnView)
END_MESSAGE_MAP()

// CWeek83View ����/����

CWeek83View::CWeek83View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek83View::~CWeek83View()
{
}

BOOL CWeek83View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek83View ����

void CWeek83View::OnDraw(CDC* /*pDC*/)
{
	CWeek83Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek83View ���

#ifdef _DEBUG
void CWeek83View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek83View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek83Doc* CWeek83View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek83Doc)));
	return (CWeek83Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek83View ��Ϣ�������


void CWeek83View::OnView()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	int t = dlg.DoModal();
}
