
// Week8(3)View.h : CWeek83View ��Ľӿ�
//

#pragma once


class CWeek83View : public CView
{
protected: // �������л�����
	CWeek83View();
	DECLARE_DYNCREATE(CWeek83View)

// ����
public:
	CWeek83Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek83View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnView();
};

#ifndef _DEBUG  // Week8(3)View.cpp �еĵ��԰汾
inline CWeek83Doc* CWeek83View::GetDocument() const
   { return reinterpret_cast<CWeek83Doc*>(m_pDocument); }
#endif

