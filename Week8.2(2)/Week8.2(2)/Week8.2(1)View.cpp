
// Week8.2(1)View.cpp : CWeek821View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week8.2(1).h"
#endif

#include "Week8.2(1)Doc.h"
#include "Week8.2(1)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek821View

IMPLEMENT_DYNCREATE(CWeek821View, CView)

BEGIN_MESSAGE_MAP(CWeek821View, CView)
END_MESSAGE_MAP()

// CWeek821View ����/����

CWeek821View::CWeek821View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek821View::~CWeek821View()
{
}

BOOL CWeek821View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek821View ����

void CWeek821View::OnDraw(CDC* pDC)
{
	CWeek821Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(pDoc->rc);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek821View ���

#ifdef _DEBUG
void CWeek821View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek821View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek821Doc* CWeek821View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek821Doc)));
	return (CWeek821Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek821View ��Ϣ�������
