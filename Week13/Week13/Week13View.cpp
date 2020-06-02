
// Week13View.cpp : CWeek13View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week13.h"
#endif

#include "Week13Set.h"
#include "Week13Doc.h"
#include "Week13View.h"
#include "Mydlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek13View

IMPLEMENT_DYNCREATE(CWeek13View, CRecordView)

BEGIN_MESSAGE_MAP(CWeek13View, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_BN_CLICKED(IDC_BUTTON2, &CWeek13View::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CWeek13View::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON1, &CWeek13View::OnBnClickedButtonAdd)
END_MESSAGE_MAP()

// CWeek13View ����/����

CWeek13View::CWeek13View()
	: CRecordView(IDD_WEEK13_FORM)
	, x(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CWeek13View::~CWeek13View()
{
}

void CWeek13View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1,m_pSet->m_1);
}

BOOL CWeek13View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CWeek13View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week13Set;
	CRecordView::OnInitialUpdate();

}


// CWeek13View ��ӡ

BOOL CWeek13View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CWeek13View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CWeek13View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CWeek13View ���

#ifdef _DEBUG
void CWeek13View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek13View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek13Doc* CWeek13View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek13Doc)));
	return (CWeek13Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek13View ���ݿ�֧��
CRecordset* CWeek13View::OnGetRecordset()
{
	return m_pSet;
}



// CWeek13View ��Ϣ�������


void CWeek13View::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Mydlg dlg;
	int t = dlg.DoModal();
	if (t == IDOK) {
		CString z = dlg.y;
		m_pSet->Edit();
		m_pSet->m_1 = z;
		m_pSet->Update();
		UpdateData();
	}
}


void CWeek13View::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}


void CWeek13View::OnBnClickedButtonAdd()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Mydlg dlg;
	int t = dlg.DoModal();
	if (t == IDOK) {
		CString z = dlg.y;
		m_pSet->AddNew();
		m_pSet->m_1=z;
		m_pSet->Update();
		UpdateData();
	}

}
