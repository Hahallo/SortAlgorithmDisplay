
// �����㷨�Ķ�̬ͼ�ο��ӻ�View.h : C�����㷨�Ķ�̬ͼ�ο��ӻ�View ��Ľӿ�
//

#pragma once


class C�����㷨�Ķ�̬ͼ�ο��ӻ�View : public CView
{
protected: // �������л�����
	C�����㷨�Ķ�̬ͼ�ο��ӻ�View();
	DECLARE_DYNCREATE(C�����㷨�Ķ�̬ͼ�ο��ӻ�View)

// ����
public:
	C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~C�����㷨�Ķ�̬ͼ�ο��ӻ�View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
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

#ifndef _DEBUG  // �����㷨�Ķ�̬ͼ�ο��ӻ�View.cpp �еĵ��԰汾
inline C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc* C�����㷨�Ķ�̬ͼ�ο��ӻ�View::GetDocument() const
   { return reinterpret_cast<C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc*>(m_pDocument); }
#endif

