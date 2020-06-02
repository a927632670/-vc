
// Week11View.cpp : CWeek11View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week11.h"
#endif

#include "Week11Set.h"
#include "Week11Doc.h"
#include "Week11View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek11View

IMPLEMENT_DYNCREATE(CWeek11View, CRecordView)

BEGIN_MESSAGE_MAP(CWeek11View, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CWeek11View ����/����

CWeek11View::CWeek11View()
	: CRecordView(IDD_WEEK11_FORM)
	, ID(0)
	, name(_T(""))
	, no(_T(""))
	, age(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CWeek11View::~CWeek11View()
{
}

void CWeek11View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
}

BOOL CWeek11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CWeek11View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week11Set;
	CRecordView::OnInitialUpdate();

}


// CWeek11View ��ӡ

BOOL CWeek11View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CWeek11View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CWeek11View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CWeek11View ���

#ifdef _DEBUG
void CWeek11View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek11View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek11Doc* CWeek11View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek11Doc)));
	return (CWeek11Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek11View ���ݿ�֧��
CRecordset* CWeek11View::OnGetRecordset()
{
	return m_pSet;
}



// CWeek11View ��Ϣ�������
