
// �����㷨�Ķ�̬ͼ�ο��ӻ�View.cpp : C�����㷨�Ķ�̬ͼ�ο��ӻ�View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�����㷨�Ķ�̬ͼ�ο��ӻ�.h"
#endif

#include "�����㷨�Ķ�̬ͼ�ο��ӻ�Doc.h"
#include "�����㷨�Ķ�̬ͼ�ο��ӻ�View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�����㷨�Ķ�̬ͼ�ο��ӻ�View

IMPLEMENT_DYNCREATE(C�����㷨�Ķ�̬ͼ�ο��ӻ�View, CView)

BEGIN_MESSAGE_MAP(C�����㷨�Ķ�̬ͼ�ο��ӻ�View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_aline, &C�����㷨�Ķ�̬ͼ�ο��ӻ�View::Onaline)
	ON_COMMAND(ID_32777, &C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnGen10Nums)
	ON_COMMAND(ID_bubblesort, &C�����㷨�Ķ�̬ͼ�ο��ӻ�View::Onbubblesort)
	ON_COMMAND(ID_32780, &C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnSelectionSort)
	ON_WM_TIMER()
	ON_COMMAND(ID_32781, &C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnQuickSort)
	ON_COMMAND(ID_32784, &C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnPause)
	ON_COMMAND(ID_32785, &C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnContinue)
	ON_COMMAND(ID_32786, &C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnOver)
	ON_COMMAND(ID_32782, &C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnSlow)
	ON_COMMAND(ID_32783, &C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnFaster)
END_MESSAGE_MAP()

// C�����㷨�Ķ�̬ͼ�ο��ӻ�View ����/����

C�����㷨�Ķ�̬ͼ�ο��ӻ�View::C�����㷨�Ķ�̬ͼ�ο��ӻ�View()
{
	// TODO: �ڴ˴���ӹ������

}

C�����㷨�Ķ�̬ͼ�ο��ӻ�View::~C�����㷨�Ķ�̬ͼ�ο��ӻ�View()
{
}

BOOL C�����㷨�Ķ�̬ͼ�ο��ӻ�View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�����㷨�Ķ�̬ͼ�ο��ӻ�View ����

void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnDraw(CDC* pDC)
{
	C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
}


// C�����㷨�Ķ�̬ͼ�ο��ӻ�View ��ӡ


void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}

void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// C�����㷨�Ķ�̬ͼ�ο��ӻ�View ���

#ifdef _DEBUG
void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::AssertValid() const
{
	CView::AssertValid();
}

void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc* C�����㷨�Ķ�̬ͼ�ο��ӻ�View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc)));
	return (C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc*)m_pDocument;
}

#endif //_DEBUG


// C�����㷨�Ķ�̬ͼ�ο��ӻ�View ��Ϣ�������


void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::Onaline()
{

	CDC *pDC = GetDC();//CDC���е�GetDC()���÷�����һ��CDC��Ķ���ָ��

	CPen pNewPen;
	pNewPen.CreatePen(PS_SOLID, 10, RGB(255, 0,0)); //��ɫ�ıʿ��Ϊ10
	CPen* poldPen = pDC->SelectObject(&pNewPen);//
	//�ڽ��¶���ѡ���豸������ͬʱ����ָ��ǰһ�α�ѡ�����ָ�롣���ñ���ԭ���Ķ����Ա��������ʱ�ָ���
	//pDC->SetBkColor(RGB(255, 255,255));//���þ��α���ɫΪ
	//pDC->DrawText(str2, CRect(270, 300, 400, 350), DT_SINGLELINE | DT_LEFT | DT_VCENTER);
	//int b = 2000000;
	//CString str,str2;
	//str2.Format(TEXT("%d"),11111);
	
	//pDC->FillSolidRect(CRect(300, 300, 350, 320), RGB(0, 255, 255));//���Ǿ������������
	//pDC->TextOutW(300, 300, str2);
	ReleaseDC(pDC);//�μǵ���,������������Ȼ��Ҫ�����ͷ�DC
}



void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	switch (nIDEvent)
	{
	case 1:
		if(bubble)
		{
			if (last == 0)
			{
				PenColor(0, 255, 0, 50, 600 - p_bubble[last] * 10);
				KillTimer(1);
				MessageBox(L"ð��������ɣ�");
				bubble = FALSE;
			}
			else if (first == last)
			{
				PenColor(0, 255, 0, last * 50 + 50, 600 - p_bubble[last] * 10);
				last--;
				first = 0;
			}
			else
			{
				PenColor(255, 0, 0, first * 50 + 50, 600 - p_bubble[first] * 10);
				Sleep(sleeptime);
				if (p_bubble[first] > p_bubble[first + 1])
				{
					swap(first, first + 1,p_bubble);
					PenColor(255, 0, 0, first * 50 + 100, 600 - p_bubble[first + 1] * 10);
					PenColor(255, 255, 255, first * 50 + 50, 600 - p_bubble[first + 1] * 10);
					PenColor(0, 0, 0, first * 50 + 50, 600 - p_bubble[first] * 10);
					first++;
				}
				else
				{
					PenColor(0, 0, 0, first * 50 + 50, 600 - p_bubble[first] * 10);
					first++;
					PenColor(255, 0, 0, first * 50 + 50, 600 - p_bubble[first] * 10);
				}
			}
		}
		else
		{
			KillTimer(1);
			MessageBox(L"������");
			bubble = FALSE;
		}
		break;
	case 2:
		if (selection)
		{
			if (first == len)
			{
				KillTimer(2);
				MessageBox(L"�������������");
				selection = FALSE;
			}
			else if (first < len)
			{
				if (first2<len)
				{
					PenColor(255, 0, 0, first2 * 50 + 50, 600 - p_selection[first2] * 10);//��
					Sleep(sleeptime);
					PenColor(0, 0, 0, first2 * 50 + 50, 600 - p_selection[first2] * 10);//��

					if (p_selection[first2]<p_selection[minIndex])minIndex = first2;
					first2++;
				}
				else
				{
					if (minIndex == first)
					{
						PenColor(0, 255, 0, first * 50 + 50, 600 - p_selection[first] * 10);//��
						first++;
						minIndex = first;
						first2 = minIndex + 1;
					}
					else
					{
						swap(minIndex, first,p_selection);
						PenColor(255, 255, 255, first * 50 + 50, 0);//��

						PenColor(0, 255, 0, first * 50 + 50, 600 - p_selection[first] * 10);//��

						PenColor(0, 0, 0, minIndex * 50 + 50, 600 - p_selection[minIndex] * 10);//��

						first++;
						minIndex = first;
						first2 = minIndex + 1;
						Sleep(sleeptime);
					}
				}
			}
		}
		else
		{
			KillTimer(2);
			MessageBox(L"������");
			selection = FALSE;
		}
		break;
	default:
		break;
	}

	
	CView::OnTimer(nIDEvent);
}

int C�����㷨�Ķ�̬ͼ�ο��ӻ�View::Partition(int low, int high)
{
	int temp;//�����ֵ����ʱ����
	int i = low, j = high;
	temp = p_quick[low];
	while (i < j)
	{
		while ((i < j) && temp <= p_quick[j])j--;
		if (i<j)
		{
			Equal(i, p_quick[j],p_quick);
			PenColor(255,255, 255, i * 50 + 50, 0);//��
			PenColor(0,255 , 0, i * 50 + 50, 600 - p_quick[i] * 10);//��
			Sleep(500);
			i++;
		}
		while ((i < j) && p_quick[i] < temp)i++;
		if (i<j)
		{
			Equal(j, p_quick[i],p_quick);
			PenColor( 0,255, 0, j * 50 + 50, 600 - p_quick[j] * 10);//��
			Sleep(500);
			j--;
		}
	}
	Equal(i, temp,p_quick);
	PenColor(255, 255, 255, i * 50 + 50, 0);//��
	PenColor(0,255 , 0, i* 50 + 50, 600 - p_quick[i] * 10);//��
	Sleep(500);
	return i;
}
void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::QuickSort(int low, int high)
{
	if (high <= low)return;
	pivot = Partition(low, high);
	QuickSort(low, pivot - 1);
	QuickSort(pivot + 1, high);
}

void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnQuickSort()
{
	low = 0;
	high = len - 1;
	if (!(bubble || selection || quick))//��û��һ��Ϊtrueʱ
	{
		quick = TRUE;
		selection = FALSE;
		 bubble= FALSE;
		 p_quick = new int[len];
		 Copy(p_quick);
		 QuickSort(low, high);
		 MessageBox(L"�������������");
		 quick = FALSE;
	}
}

void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::swap(int m, int n,int*p)
{
	CDC *pDC = GetDC();
	CString str;
	pDC->FillSolidRect(CRect(m * 50 + 45, 610, m * 50 + 70, 630), RGB(255, 255, 255));//���Ǿ������������
	str.Format(TEXT("%d"),p[n]);
	pDC->TextOutW(m * 50 + 45, 610, str);//����λ��
	pDC->FillSolidRect(CRect(n * 50 + 45, 610, n * 50 + 70, 630), RGB(255, 255, 255));//���Ǿ������������
	str.Format(TEXT("%d"), p[m]);
	pDC->TextOutW(n * 50 + 45, 610, str);//����λ��
	
	int temp =p[m];
	p[m] =p[n];
	p[n]= temp;
}

void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::Equal(int m, int n,int*p)
{
	CDC *pDC = GetDC();
	CString str;
	pDC->FillSolidRect(CRect(m * 50 + 45, 610, m * 50 + 70, 630), RGB(255, 255, 255));//���Ǿ������������
	str.Format(TEXT("%d"), n);
	pDC->TextOutW(m * 50 + 45, 610, str);//����λ��

	p[m] = n;

}

void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnGen10Nums()
{
	//CDC *pDC = GetDC();
	len =10;
	sleeptime =800;
	a = new int[len];
	for (int i = 0;i < len;i++)
	{
		a[i] = rand() % 60;
	}
	DisplayNums();
}

void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::DisplayNums()
{
	CDC *pDC = GetDC();
	CString str;
	for (int i = 0;i < len;i++)
	{
		pDC->FillSolidRect(CRect(i * 50 + 45, 610, i * 50 + 70, 630), RGB(255, 255, 255));//���Ǿ������������
		PenColor(255, 255, 255, i * 50 + 50, 0);
		PenColor(0, 0, 0, i * 50 + 50, 600 - a[i] * 10);
		str.Format(TEXT("%d"), a[i]);
		pDC->TextOutW(i * 50 + 45, 610, str);//����λ��
		//pDC->FillSolidRect(CRect(300, 300, 400, 350), RGB(0, 255, 255));//���Ǿ������������
	}
	ReleaseDC(pDC);
}


void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::Copy(int*p)
{
	for (int i = 0;i < len;i++)
	{
		p[i] = a[i];
	}
}

void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::Onbubblesort()
{
	if (!(bubble || selection || quick))//��û��һ��Ϊtrueʱ
	{
		bubble = TRUE;
		selection = FALSE;
		quick = FALSE;
		p_bubble = new int[len];
		Copy(p_bubble);
		last = len - 1;
		first = 0;
		SetTimer(1, 100, NULL);
	}
}

void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::PenColor(int r,int g,int b,int x,int y)
{
	CDC *pDC = GetDC();

	CPen pPen;
	pPen.CreatePen(PS_SOLID, 10, RGB(r, g, b)); //��ɫ�ıʿ��Ϊ10
	pDC->SelectObject(&pPen);
	pDC->MoveTo(x, 600);//����CDC�ĳ�Ա��������
	pDC->LineTo(x, y);
	ReleaseDC(pDC);//�μǵ���,������������Ȼ��Ҫ�����ͷ�DC
}
void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnSelectionSort()
{
	
	if (!bubble || selection || quick)//��û��һ��Ϊtrueʱ
	{
		selection = TRUE;
		bubble = FALSE;
		quick = FALSE;
		p_selection = new int[len];
		Copy(p_selection);
		minIndex = 0;
		first2 = 1;
		first = 0;
		SetTimer(2, 100, NULL);
	}
}



void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnPause()
{
	//�ж��ĸ�Ϊtrue��Ϊtrue �Ķ�Ӧ�ļ�ʱ���ر�
	if (bubble)KillTimer(1);
	else if (selection)KillTimer(2);
}


void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnContinue()
{
	//�ж��ĸ�Ϊtrue��Ϊtrue �Ķ�Ӧ�ļ�ʱ������
	if (bubble)SetTimer(1, 100, NULL);
	else if (selection)SetTimer(2,100,NULL);
}


void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnOver()
{
	//�ж��ĸ�Ϊtrue��Ϊtrue �Ķ�Ӧ������Ϊfalse
	if (bubble)
	{
		bubble = FALSE;
		delete[]p_bubble;
	}
	else if (selection)
	{
		selection = FALSE;
		delete[] p_selection;
	}
	else if (quick)
	{
		quick = FALSE;
		delete[] p_quick;
	}
	DisplayNums();
}


void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnSlow()
{
	// TODO: �ڴ���������������
	sleeptime *= 2;
}


void C�����㷨�Ķ�̬ͼ�ο��ӻ�View::OnFaster()
{
	// TODO: �ڴ���������������
	//if (sleeptime < 100)MessageBox();
	sleeptime /= 2;
}
