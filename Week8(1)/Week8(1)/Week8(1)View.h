
// Week8(1)View.h : CWeek81View ��Ľӿ�
//

#pragma once


class CWeek81View : public CView
{
protected: // �������л�����
	CWeek81View();
	DECLARE_DYNCREATE(CWeek81View)

// ����
public:
	CWeek81Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek81View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week8(1)View.cpp �еĵ��԰汾
inline CWeek81Doc* CWeek81View::GetDocument() const
   { return reinterpret_cast<CWeek81Doc*>(m_pDocument); }
#endif

