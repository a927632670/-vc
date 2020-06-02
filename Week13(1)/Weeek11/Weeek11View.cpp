
// Weeek11View.cpp : CWeeek11View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Weeek11.h"
#include "Mydlg.h"
#endif

#include "Weeek11Set.h"
#include "Weeek11Doc.h"
#include "Weeek11View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeeek11View

IMPLEMENT_DYNCREATE(CWeeek11View, CRecordView)

BEGIN_MESSAGE_MAP(CWeeek11View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &CWeeek11View::OnBnClickedButton1)
	ON_COMMAND(ID_RECORD_FIRST, &CWeeek11View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CWeeek11View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CWeeek11View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CWeeek11View::OnRecordLast)
	ON_BN_CLICKED(IDC_BUTTON2, &CWeeek11View::OnBnClickedButton2)
END_MESSAGE_MAP()

// CWeeek11View ����/����

CWeeek11View::CWeeek11View()
	: CRecordView(IDD_WEEEK11_FORM)
	, id(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CWeeek11View::~CWeeek11View()
{
}

void CWeeek11View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, ID_EDIT1,m_pSet->m_1);
}

BOOL CWeeek11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CWeeek11View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Weeek11Set;
	CRecordView::OnInitialUpdate();

}


// CWeeek11View ���

#ifdef _DEBUG
void CWeeek11View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeeek11View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeeek11Doc* CWeeek11View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeeek11Doc)));
	return (CWeeek11Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeeek11View ���ݿ�֧��
CRecordset* CWeeek11View::OnGetRecordset()
{
	return m_pSet;
}



// CWeeek11View ��Ϣ�������


void CWeeek11View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString s;
	GetDlgItemText(ID_EDIT1, s);
	draw_pic(s);
}

 void CWeeek11View::draw_pic(CString file)
{
	
	//pDC->TextOutW(0, 0, file);
	CImage img;
	img.Load(file);
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
    int  sx=0, sy, w, h;
    CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(rect);
	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

	if (rect_ratio > img_ratio) {
		h = rect.Height();
		w = img_ratio * h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else {
		w = rect.Width();
		h = w / img_ratio;
		sy = 0;
		sy = (rect.Height() - h) / 2;
	}
	img.Draw(pDC->m_hDC, sx, sy, w, h);
}





 void CWeeek11View::OnRecordFirst()
 {
	 // TODO: �ڴ���������������
	 m_pSet->MoveFirst();
	 UpdateData(false);
	 CString s;
	 GetDlgItemText(ID_EDIT1, s);
	 draw_pic(s);
	 
 }


 void CWeeek11View::OnRecordPrev()
 {
	 // TODO: �ڴ���������������
	 m_pSet->MovePrev();
	 if (m_pSet->IsBOF())
		 m_pSet->MoveFirst();
	 UpdateData(false);
	 CString s;
	 GetDlgItemText(ID_EDIT1, s);
	 draw_pic(s);
	 
 }


 void CWeeek11View::OnRecordNext()
 {
	 // TODO: �ڴ���������������
	 m_pSet->MoveNext();
	 if (m_pSet->IsEOF())
		 m_pSet->MoveLast();
	 UpdateData(false);
	 CString s;
	 GetDlgItemText(ID_EDIT1, s);
	 draw_pic(s);
	 
 }


 void CWeeek11View::OnRecordLast()
 {
	 // TODO: �ڴ���������������
	 m_pSet->MoveLast();
	 UpdateData(false);
	 CString s;
	 GetDlgItemText(ID_EDIT1, s);
	 draw_pic(s);
	
 }


 void CWeeek11View::OnBnClickedButton2()
 {
	 // TODO: �ڴ���ӿؼ�֪ͨ����������
	 this->UpdateData(true);
	 Mydlg dlg;
	 GetDlgItemText(ID_EDIT1, dlg.s);
	 int t = dlg.DoModal();
	
	 UpdateData(false);
 }
