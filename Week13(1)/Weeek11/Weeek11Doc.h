
// Weeek11Doc.h : CWeeek11Doc ��Ľӿ�
//


#pragma once
#include "Weeek11Set.h"


class CWeeek11Doc : public CDocument
{
protected: // �������л�����
	CWeeek11Doc();
	DECLARE_DYNCREATE(CWeeek11Doc)

// ����
public:
	CWeeek11Set m_Weeek11Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CWeeek11Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
