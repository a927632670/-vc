
// Week8(2)View.cpp : CWeek82View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week8(2).h"
#endif

#include "Week8(2)Doc.h"
#include "Week8(2)View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek82View

IMPLEMENT_DYNCREATE(CWeek82View, CView)

BEGIN_MESSAGE_MAP(CWeek82View, CView)
	ON_COMMAND(ID_32771, &CWeek82View::On32771)
END_MESSAGE_MAP()

// CWeek82View ����/����

CWeek82View::CWeek82View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek82View::~CWeek82View()
{
}

BOOL CWeek82View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek82View ����

void CWeek82View::OnDraw(CDC* /*pDC*/)
{
	CWeek82Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek82View ���

#ifdef _DEBUG
void CWeek82View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek82View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek82Doc* CWeek82View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek82Doc)));
	return (CWeek82Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek82View ��Ϣ�������


void CWeek82View::On32771()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	int r = dlg.DoModal();

}
