
// jiechenView.h : CjiechenView ��Ľӿ�
//

#pragma once


class CjiechenView : public CView
{
protected: // �������л�����
	CjiechenView();
	DECLARE_DYNCREATE(CjiechenView)

// ����
public:
	CjiechenDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CjiechenView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // jiechenView.cpp �еĵ��԰汾
inline CjiechenDoc* CjiechenView::GetDocument() const
   { return reinterpret_cast<CjiechenDoc*>(m_pDocument); }
#endif

