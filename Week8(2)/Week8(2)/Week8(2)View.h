
// Week8(2)View.h : CWeek82View ��Ľӿ�
//

#pragma once


class CWeek82View : public CView
{
protected: // �������л�����
	CWeek82View();
	DECLARE_DYNCREATE(CWeek82View)

// ����
public:
	CWeek82Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek82View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
};

#ifndef _DEBUG  // Week8(2)View.cpp �еĵ��԰汾
inline CWeek82Doc* CWeek82View::GetDocument() const
   { return reinterpret_cast<CWeek82Doc*>(m_pDocument); }
#endif

