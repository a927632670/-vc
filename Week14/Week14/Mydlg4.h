#pragma once


// Mydlg4 �Ի���

class Mydlg4 : public CDialogEx
{
	DECLARE_DYNAMIC(Mydlg4)

public:
	Mydlg4(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Mydlg4();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString y;
	afx_msg void OnBnClickedButton1();
};
