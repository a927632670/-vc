
// week(2)View.h : Cweek2View ��Ľӿ�
//

#pragma once


class Cweek2View : public CView
{
protected: // �������л�����
	Cweek2View();
	DECLARE_DYNCREATE(Cweek2View)

// ����
public:
	Cweek2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek2View();
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

#ifndef _DEBUG  // week(2)View.cpp �еĵ��԰汾
inline Cweek2Doc* Cweek2View::GetDocument() const
   { return reinterpret_cast<Cweek2Doc*>(m_pDocument); }
#endif

