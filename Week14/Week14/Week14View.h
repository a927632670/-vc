
// Week14View.h : CWeek14View ��Ľӿ�
//

#pragma once
#include "afxwin.h"

class CWeek14Set;

class CWeek14View : public CRecordView
{
protected: // �������л�����
	CWeek14View();
	DECLARE_DYNCREATE(CWeek14View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK14_FORM };
#endif
	CWeek14Set* m_pSet;

// ����
public:
	CWeek14Doc* GetDocument() const;
	void draw_pic(CString file);


// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CWeek14View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTvnSelchangedTree1(NMHDR *pNMHDR, LRESULT *pResult);
	CString a;
	CString b;
	CString d;
	CString e;
	
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnBnClickedButton2();
	virtual void OnDraw(CDC* /*pDC*/);
	afx_msg void OnOrder();
	afx_msg void OnSelect();
	afx_msg void OnRecord();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // Week14View.cpp �еĵ��԰汾
inline CWeek14Doc* CWeek14View::GetDocument() const
   { return reinterpret_cast<CWeek14Doc*>(m_pDocument); }
#endif

