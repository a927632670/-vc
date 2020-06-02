﻿
// week7(1)View.h: Cweek71View 类的接口
//

#pragma once


class Cweek71View : public CView
{
protected: // 仅从序列化创建
	Cweek71View() noexcept;
	DECLARE_DYNCREATE(Cweek71View)

// 特性
public:
	Cweek71Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek71View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // week7(1)View.cpp 中的调试版本
inline Cweek71Doc* Cweek71View::GetDocument() const
   { return reinterpret_cast<Cweek71Doc*>(m_pDocument); }
#endif

