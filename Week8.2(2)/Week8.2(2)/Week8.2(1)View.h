
// Week8.2(1)View.h : CWeek821View ��Ľӿ�
//

#pragma once


class CWeek821View : public CView
{
protected: // �������л�����
	CWeek821View();
	DECLARE_DYNCREATE(CWeek821View)

// ����
public:
	CWeek821Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek821View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Week8.2(1)View.cpp �еĵ��԰汾
inline CWeek821Doc* CWeek821View::GetDocument() const
   { return reinterpret_cast<CWeek821Doc*>(m_pDocument); }
#endif

