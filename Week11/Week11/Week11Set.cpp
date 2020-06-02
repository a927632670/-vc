
// Week11Set.cpp : CWeek11Set ���ʵ��
//

#include "stdafx.h"
#include "Week11.h"
#include "Week11Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek11Set ʵ��

// ���������� 2020��5��14��, 21:29

IMPLEMENT_DYNAMIC(CWeek11Set, CRecordset)

CWeek11Set::CWeek11Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_nFields = 4;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CWeek11Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f;DBQ=D:\\\x65b0\x5efa\x6587\x4ef6\x5939 (2)\\Database1.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CWeek11Set::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ]");
}

void CWeek11Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);

}
/////////////////////////////////////////////////////////////////////////////
// CWeek11Set ���

#ifdef _DEBUG
void CWeek11Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CWeek11Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

