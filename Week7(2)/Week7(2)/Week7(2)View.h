
// Week7(2)View.h : CWeek72View ��Ľӿ�
//

#pragma once


class CWeek72View : public CView
{
protected: // �������л�����
	CWeek72View();
	DECLARE_DYNCREATE(CWeek72View)

// ����
public:
	CWeek72Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek72View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	//afx_msg void OnBnClickedButton1();
	afx_msg void OnView();
};

#ifndef _DEBUG  // Week7(2)View.cpp �еĵ��԰汾
inline CWeek72Doc* CWeek72View::GetDocument() const
   { return reinterpret_cast<CWeek72Doc*>(m_pDocument); }
#endif

