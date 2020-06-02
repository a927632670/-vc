
// Weeek11Set.cpp : CWeeek11Set ���ʵ��
//

#include "stdafx.h"
#include "Weeek11.h"
#include "Weeek11Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeeek11Set ʵ��

// ���������� 2020��5��16��, 17:56

IMPLEMENT_DYNAMIC(CWeeek11Set, CRecordset)

CWeeek11Set::CWeeek11Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_nFields = 2;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CWeeek11Set::GetDefaultConnect()
{
	return _T("DSN=\x5b66\x751f\x4fe1\x606f;DBQ=D:\\\x65b0\x5efa\x6587\x4ef6\x5939 (2)\\Database2.accdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CWeeek11Set::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ]");
}

void CWeeek11Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);

}
/////////////////////////////////////////////////////////////////////////////
// CWeeek11Set ���

#ifdef _DEBUG
void CWeeek11Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CWeeek11Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

