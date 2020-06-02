
// Week14View.cpp : CWeek14View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week14.h"
#endif

#include "Week14Set.h"
#include "Week14Doc.h"
#include "Week14View.h"
#include "Mydlg.h"
#include "Mydlg2.h"
#include "Mydlg4.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek14View

IMPLEMENT_DYNCREATE(CWeek14View, CRecordView)

BEGIN_MESSAGE_MAP(CWeek14View, CRecordView)
	//ON_NOTIFY(TVN_SELCHANGED, IDC_TREE1, &CWeek14View::OnTvnSelchangedTree1)
	ON_COMMAND(ID_RECORD_FIRST, &CWeek14View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CWeek14View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CWeek14View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CWeek14View::OnRecordLast)
	ON_COMMAND(ID_RECORD_FIRST, &CWeek14View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CWeek14View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CWeek14View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CWeek14View::OnRecordLast)
	ON_BN_CLICKED(IDC_BUTTON2, &CWeek14View::OnBnClickedButton2)
	ON_COMMAND(ID_32772, &CWeek14View::OnOrder)
	ON_COMMAND(ID_32773, &CWeek14View::OnSelect)
	ON_COMMAND(ID_32777, &CWeek14View::OnRecord)
	ON_BN_CLICKED(IDC_BUTTON1, &CWeek14View::OnBnClickedButton1)
END_MESSAGE_MAP()

// CWeek14View ����/����

CWeek14View::CWeek14View()
	: CRecordView(IDD_WEEK14_FORM)
	, a(_T(""))
	, b(_T(""))
	, d(_T(""))
	, e(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������


}

CWeek14View::~CWeek14View()
{

}

void CWeek14View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
}

BOOL CWeek14View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CWeek14View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week14Set;
	
	CRecordView::OnInitialUpdate();
	

}


// CWeek14View ���

#ifdef _DEBUG
void CWeek14View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek14View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek14Doc* CWeek14View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek14Doc)));
	return (CWeek14Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek14View ���ݿ�֧��
CRecordset* CWeek14View::OnGetRecordset()
{
	return m_pSet;
}



// CWeek14View ��Ϣ�������


void CWeek14View::OnTvnSelchangedTree1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMTREEVIEW pNMTreeView = reinterpret_cast<LPNMTREEVIEW>(pNMHDR);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	*pResult = 0;
}
void CWeek14View::draw_pic(CString file)

{


	CImage img;
	img.Load(file);
	CDC* pDC = GetDlgItem(IDC_STATIC1)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&rect);
	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);

}





void CWeek14View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();

	UpdateData(false);

	CString s;

	GetDlgItemText(IDC_EDIT4, s);

	draw_pic(s);
	Invalidate();
}


void CWeek14View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();

	if (m_pSet->IsBOF())

		m_pSet->MoveFirst();

	UpdateData(false);

	CString s;

	GetDlgItemText(IDC_EDIT4, s);

	draw_pic(s);
	Invalidate();
}


void CWeek14View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();

	if (m_pSet->IsEOF())

		m_pSet->MoveLast();

	UpdateData(false);

	CString s;

	GetDlgItemText(IDC_EDIT4, s);

	draw_pic(s);
	Invalidate();
}


void CWeek14View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();

	UpdateData(false);

	CString s;

	GetDlgItemText(IDC_EDIT4, s);

	draw_pic(s);
	Invalidate();


}


void CWeek14View::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);

	Mydlg dlg;

	GetDlgItemText(IDC_EDIT4, dlg.s);

	int t = dlg.DoModal();



	UpdateData(false);

}


void CWeek14View::OnDraw(CDC* pDC)
{
	// TODO: �ڴ����ר�ô����/����û���
	CString s;

	GetDlgItemText(IDC_EDIT4, s);

	draw_pic(s);
}


void CWeek14View::OnOrder()
{
	// TODO: �ڴ���������������
	Mydlg2 dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {
		UpdateData();
		m_pSet->m_strSort = dlg.x;
		m_pSet->Requery();
		UpdateData(false);
	
	}
	
}


void CWeek14View::OnSelect()
{
	// TODO: �ڴ���������������
	Mydlg2 dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {
		UpdateData();
		m_pSet->m_strFilter = dlg.x;
		m_pSet->Requery();
		UpdateData(false);
	}	
}


void CWeek14View::OnRecord()
{
	// TODO: �ڴ���������������
	Mydlg4 dlg;
	int n;
	int r = dlg.DoModal();
	if (r == IDOK) {
		UpdateData();
    
		
		dlg.y = _T("213");
		UpdateData(false);
	}
}


void CWeek14View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Mydlg4 dlg;
	this->UpdateData(true);
		dlg.y = _T("213");
		UpdateData(false);
}
