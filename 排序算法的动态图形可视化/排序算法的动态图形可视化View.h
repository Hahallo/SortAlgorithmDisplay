
// 排序算法的动态图形可视化View.h : C排序算法的动态图形可视化View 类的接口
//

#pragma once


class C排序算法的动态图形可视化View : public CView
{
protected: // 仅从序列化创建
	C排序算法的动态图形可视化View();
	DECLARE_DYNCREATE(C排序算法的动态图形可视化View)

// 特性
public:
	C排序算法的动态图形可视化Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~C排序算法的动态图形可视化View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onaline();
	afx_msg void OnGen10Nums();
	void QuickSort(int low, int high);
	int Partition(int low, int high);
	void PenColor(int r, int g, int b,int x,int y);
	void swap(int m, int n,int*p);
	void Equal(int m, int n,int*p);
	void DisplayNums();
	void Copy(int*p);
	int *a;
	int *p_bubble;
	int *p_selection;
	int *p_quick;
	int len;
	int last;
	int first;
	int first2;

	int pivot;
	int high;
	int low;

	int minIndex;
	int sleeptime;

	bool bubble=FALSE;
	bool selection=FALSE;
	bool quick=FALSE;

	afx_msg void Onbubblesort();
	afx_msg void OnSelectionSort();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnQuickSort();
	afx_msg void OnPause();
	afx_msg void OnContinue();
	afx_msg void OnOver();
	afx_msg void OnSlow();
	afx_msg void OnFaster();
};

#ifndef _DEBUG  // 排序算法的动态图形可视化View.cpp 中的调试版本
inline C排序算法的动态图形可视化Doc* C排序算法的动态图形可视化View::GetDocument() const
   { return reinterpret_cast<C排序算法的动态图形可视化Doc*>(m_pDocument); }
#endif

