
// Week13View.h : CWeek13View ��Ľӿ�
//

#pragma once

class CWeek13Set;

class CWeek13View : public CRecordView
{
protected: // �������л�����
	CWeek13View();
	DECLARE_DYNCREATE(CWeek13View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK13_FORM };
#endif
	CWeek13Set* m_pSet;

// ����
public:
	CWeek13Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CWeek13View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	CString x;
	afx_msg void OnBnClickedButtonAdd();
};

#ifndef _DEBUG  // Week13View.cpp �еĵ��԰汾
inline CWeek13Doc* CWeek13View::GetDocument() const
   { return reinterpret_cast<CWeek13Doc*>(m_pDocument); }
#endif

