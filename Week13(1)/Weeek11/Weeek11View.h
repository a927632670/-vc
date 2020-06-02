
// Weeek11View.h : CWeeek11View ��Ľӿ�
//

#pragma once

class CWeeek11Set;

class CWeeek11View : public CRecordView
{
protected: // �������л�����
	CWeeek11View();
	DECLARE_DYNCREATE(CWeeek11View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEEK11_FORM };
#endif
	CWeeek11Set* m_pSet;

// ����
public:
	CWeeek11Doc* GetDocument() const;
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
	virtual ~CWeeek11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString id;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnBnClickedButton2();
};

#ifndef _DEBUG  // Weeek11View.cpp �еĵ��԰汾
inline CWeeek11Doc* CWeeek11View::GetDocument() const
   { return reinterpret_cast<CWeeek11Doc*>(m_pDocument); }
#endif

