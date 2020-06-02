
// Week14Set.cpp : CWeek14Set ���ʵ��
//

#include "stdafx.h"
#include "Week14.h"
#include "Week14Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek14Set ʵ��

// ���������� 2020��5��25��, 22:01

IMPLEMENT_DYNAMIC(CWeek14Set, CRecordset)

CWeek14Set::CWeek14Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = L"";
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_nFields = 4;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CWeek14Set::GetDefaultConnect()
{
	return _T("DSN=\x4fe1\x606f\x8868;DBQ=D:\\\x65b0\x5efa\x6587\x4ef6\x5939 (2)\\Database2.accdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CWeek14Set::GetDefaultSQL()
{
	return _T("[��Ϣ��]");
}

void CWeek14Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Text(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[����]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);

}
/////////////////////////////////////////////////////////////////////////////
// CWeek14Set ���

#ifdef _DEBUG
void CWeek14Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CWeek14Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

