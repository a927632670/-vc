
// week(2)View.cpp : Cweek2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week(2).h"
#endif

#include "week(2)Doc.h"
#include "week(2)View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek2View

IMPLEMENT_DYNCREATE(Cweek2View, CView)

BEGIN_MESSAGE_MAP(Cweek2View, CView)
	ON_COMMAND(ID_VIEW, &Cweek2View::OnView)
END_MESSAGE_MAP()

// Cweek2View ����/����

Cweek2View::Cweek2View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek2View::~Cweek2View()
{
}

BOOL Cweek2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek2View ����

void Cweek2View::OnDraw(CDC* /*pDC*/)
{
	Cweek2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek2View ���

#ifdef _DEBUG
void Cweek2View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek2Doc* Cweek2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek2Doc)));
	return (Cweek2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek2View ��Ϣ�������


void Cweek2View::OnView()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	int r = dlg.DoModal();
}
