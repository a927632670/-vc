
// Week13Doc.h : CWeek13Doc ��Ľӿ�
//


#pragma once
#include "Week13Set.h"


class CWeek13Doc : public CDocument
{
protected: // �������л�����
	CWeek13Doc();
	DECLARE_DYNCREATE(CWeek13Doc)

// ����
public:
	CWeek13Set m_Week13Set;

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
	virtual ~CWeek13Doc();
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
