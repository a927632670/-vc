
// Week8(1)View.cpp : CWeek81View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week8(1).h"
#endif

#include "Week8(1)Doc.h"
#include "Week8(1)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek81View

IMPLEMENT_DYNCREATE(CWeek81View, CView)

BEGIN_MESSAGE_MAP(CWeek81View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CWeek81View ����/����

CWeek81View::CWeek81View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek81View::~CWeek81View()
{
}

BOOL CWeek81View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek81View ����

void CWeek81View::OnDraw(CDC* /*pDC*/)
{
	CWeek81Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek81View ���

#ifdef _DEBUG
void CWeek81View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek81View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek81Doc* CWeek81View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek81Doc)));
	return (CWeek81Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek81View ��Ϣ�������


void CWeek81View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK) {
		CString filename = cfd.GetPathName();
		dc.TextOutW(200, 300, filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
}
