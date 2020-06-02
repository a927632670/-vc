
// jiechenView.cpp : CjiechenView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "jiechen.h"
#endif

#include "jiechenDoc.h"
#include "jiechenView.h"
#include "factorial.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CjiechenView

IMPLEMENT_DYNCREATE(CjiechenView, CView)

BEGIN_MESSAGE_MAP(CjiechenView, CView)
END_MESSAGE_MAP()

// CjiechenView ����/����

CjiechenView::CjiechenView()
{
	// TODO: �ڴ˴���ӹ������

}

CjiechenView::~CjiechenView()
{
}

BOOL CjiechenView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CjiechenView ����

void CjiechenView::OnDraw(CDC* pDC)
{
	CjiechenDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s,t;
	FAC x;
	s .Format(_T("%d"),pchar(5));
	pDC->TextOutW(200, 150, s);
	t.Format(_T("%f"),x.convert(30.0) );
	pDC->TextOutW(200, 200, t);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CjiechenView ���

#ifdef _DEBUG
void CjiechenView::AssertValid() const
{
	CView::AssertValid();
}

void CjiechenView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CjiechenDoc* CjiechenView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CjiechenDoc)));
	return (CjiechenDoc*)m_pDocument;
}
#endif //_DEBUG


// CjiechenView ��Ϣ�������
