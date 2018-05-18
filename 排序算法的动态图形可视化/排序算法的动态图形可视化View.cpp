
// 排序算法的动态图形可视化View.cpp : C排序算法的动态图形可视化View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "排序算法的动态图形可视化.h"
#endif

#include "排序算法的动态图形可视化Doc.h"
#include "排序算法的动态图形可视化View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C排序算法的动态图形可视化View

IMPLEMENT_DYNCREATE(C排序算法的动态图形可视化View, CView)

BEGIN_MESSAGE_MAP(C排序算法的动态图形可视化View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &C排序算法的动态图形可视化View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_aline, &C排序算法的动态图形可视化View::Onaline)
	ON_COMMAND(ID_32777, &C排序算法的动态图形可视化View::OnGen10Nums)
	ON_COMMAND(ID_bubblesort, &C排序算法的动态图形可视化View::Onbubblesort)
	ON_COMMAND(ID_32780, &C排序算法的动态图形可视化View::OnSelectionSort)
	ON_WM_TIMER()
	ON_COMMAND(ID_32781, &C排序算法的动态图形可视化View::OnQuickSort)
	ON_COMMAND(ID_32784, &C排序算法的动态图形可视化View::OnPause)
	ON_COMMAND(ID_32785, &C排序算法的动态图形可视化View::OnContinue)
	ON_COMMAND(ID_32786, &C排序算法的动态图形可视化View::OnOver)
	ON_COMMAND(ID_32782, &C排序算法的动态图形可视化View::OnSlow)
	ON_COMMAND(ID_32783, &C排序算法的动态图形可视化View::OnFaster)
END_MESSAGE_MAP()

// C排序算法的动态图形可视化View 构造/析构

C排序算法的动态图形可视化View::C排序算法的动态图形可视化View()
{
	// TODO: 在此处添加构造代码

}

C排序算法的动态图形可视化View::~C排序算法的动态图形可视化View()
{
}

BOOL C排序算法的动态图形可视化View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C排序算法的动态图形可视化View 绘制

void C排序算法的动态图形可视化View::OnDraw(CDC* pDC)
{
	C排序算法的动态图形可视化Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CPen newPen;
	newPen.CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	pDC->SelectObject(&newPen);
	//pDC->MoveTo(300, 0);
	//pDC->LineTo(200, 300);
	//pDC->MoveTo(700, 0);
	//pDC->LineTo(700, 200);
	//pDC->MoveTo(0, 200);
	//pDC->LineTo(100, 200);
	//pDC->MoveTo(400, 500);
	//pDC->LineTo(400, 300);
	//pDC->Ellipse(50, 50, 55, 55);
	//pDC->Ellipse(880, 350, 885, 355);
	pDC->SelectStockObject(BLACK_PEN);

	CRect rectClient;
	GetClientRect(&rectClient);

	CRect rectScroll;
	rectScroll.left = 0;
	rectScroll.right = rectClient.Width();
	rectScroll.top = 0;
	rectScroll.bottom = 100 * 30;  //大概先设置100条数据吧

}


// C排序算法的动态图形可视化View 打印


void C排序算法的动态图形可视化View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL C排序算法的动态图形可视化View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void C排序算法的动态图形可视化View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void C排序算法的动态图形可视化View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}

void C排序算法的动态图形可视化View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void C排序算法的动态图形可视化View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// C排序算法的动态图形可视化View 诊断

#ifdef _DEBUG
void C排序算法的动态图形可视化View::AssertValid() const
{
	CView::AssertValid();
}

void C排序算法的动态图形可视化View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C排序算法的动态图形可视化Doc* C排序算法的动态图形可视化View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C排序算法的动态图形可视化Doc)));
	return (C排序算法的动态图形可视化Doc*)m_pDocument;
}

#endif //_DEBUG


// C排序算法的动态图形可视化View 消息处理程序


void C排序算法的动态图形可视化View::Onaline()
{

	CDC *pDC = GetDC();//CDC类中的GetDC()正好返回了一个CDC类的对象指针

	CPen pNewPen;
	pNewPen.CreatePen(PS_SOLID, 10, RGB(255, 0,0)); //红色的笔宽度为10
	CPen* poldPen = pDC->SelectObject(&pNewPen);//
	//在将新对象选进设备环境的同时返回指向前一次被选对象的指针。作用保存原来的对象，以便完成任务时恢复它
	//pDC->SetBkColor(RGB(255, 255,255));//设置矩形背景色为
	//pDC->DrawText(str2, CRect(270, 300, 400, 350), DT_SINGLELINE | DT_LEFT | DT_VCENTER);
	//int b = 2000000;
	//CString str,str2;
	//str2.Format(TEXT("%d"),11111);
	
	//pDC->FillSolidRect(CRect(300, 300, 350, 320), RGB(0, 255, 255));//覆盖矩形区域的数字
	//pDC->TextOutW(300, 300, str2);
	ReleaseDC(pDC);//牢记的是,在这里我们依然不要忘记释放DC
}



void C排序算法的动态图形可视化View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	switch (nIDEvent)
	{
	case 1:
		if(bubble)
		{
			if (last == 0)
			{
				PenColor(0, 255, 0, 50, 600 - p_bubble[last] * 10);
				KillTimer(1);
				MessageBox(L"冒泡排序完成！");
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
			MessageBox(L"结束！");
			bubble = FALSE;
		}
		break;
	case 2:
		if (selection)
		{
			if (first == len)
			{
				KillTimer(2);
				MessageBox(L"插入排序结束！");
				selection = FALSE;
			}
			else if (first < len)
			{
				if (first2<len)
				{
					PenColor(255, 0, 0, first2 * 50 + 50, 600 - p_selection[first2] * 10);//红
					Sleep(sleeptime);
					PenColor(0, 0, 0, first2 * 50 + 50, 600 - p_selection[first2] * 10);//黑

					if (p_selection[first2]<p_selection[minIndex])minIndex = first2;
					first2++;
				}
				else
				{
					if (minIndex == first)
					{
						PenColor(0, 255, 0, first * 50 + 50, 600 - p_selection[first] * 10);//红
						first++;
						minIndex = first;
						first2 = minIndex + 1;
					}
					else
					{
						swap(minIndex, first,p_selection);
						PenColor(255, 255, 255, first * 50 + 50, 0);//白

						PenColor(0, 255, 0, first * 50 + 50, 600 - p_selection[first] * 10);//绿

						PenColor(0, 0, 0, minIndex * 50 + 50, 600 - p_selection[minIndex] * 10);//黑

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
			MessageBox(L"结束！");
			selection = FALSE;
		}
		break;
	default:
		break;
	}

	
	CView::OnTimer(nIDEvent);
}

int C排序算法的动态图形可视化View::Partition(int low, int high)
{
	int temp;//存放轴值的临时变量
	int i = low, j = high;
	temp = p_quick[low];
	while (i < j)
	{
		while ((i < j) && temp <= p_quick[j])j--;
		if (i<j)
		{
			Equal(i, p_quick[j],p_quick);
			PenColor(255,255, 255, i * 50 + 50, 0);//白
			PenColor(0,255 , 0, i * 50 + 50, 600 - p_quick[i] * 10);//绿
			Sleep(500);
			i++;
		}
		while ((i < j) && p_quick[i] < temp)i++;
		if (i<j)
		{
			Equal(j, p_quick[i],p_quick);
			PenColor( 0,255, 0, j * 50 + 50, 600 - p_quick[j] * 10);//绿
			Sleep(500);
			j--;
		}
	}
	Equal(i, temp,p_quick);
	PenColor(255, 255, 255, i * 50 + 50, 0);//白
	PenColor(0,255 , 0, i* 50 + 50, 600 - p_quick[i] * 10);//绿
	Sleep(500);
	return i;
}
void C排序算法的动态图形可视化View::QuickSort(int low, int high)
{
	if (high <= low)return;
	pivot = Partition(low, high);
	QuickSort(low, pivot - 1);
	QuickSort(pivot + 1, high);
}

void C排序算法的动态图形可视化View::OnQuickSort()
{
	low = 0;
	high = len - 1;
	if (!(bubble || selection || quick))//当没有一个为true时
	{
		quick = TRUE;
		selection = FALSE;
		 bubble= FALSE;
		 p_quick = new int[len];
		 Copy(p_quick);
		 QuickSort(low, high);
		 MessageBox(L"快速排序结束！");
		 quick = FALSE;
	}
}

void C排序算法的动态图形可视化View::swap(int m, int n,int*p)
{
	CDC *pDC = GetDC();
	CString str;
	pDC->FillSolidRect(CRect(m * 50 + 45, 610, m * 50 + 70, 630), RGB(255, 255, 255));//覆盖矩形区域的数字
	str.Format(TEXT("%d"),p[n]);
	pDC->TextOutW(m * 50 + 45, 610, str);//数字位置
	pDC->FillSolidRect(CRect(n * 50 + 45, 610, n * 50 + 70, 630), RGB(255, 255, 255));//覆盖矩形区域的数字
	str.Format(TEXT("%d"), p[m]);
	pDC->TextOutW(n * 50 + 45, 610, str);//数字位置
	
	int temp =p[m];
	p[m] =p[n];
	p[n]= temp;
}

void C排序算法的动态图形可视化View::Equal(int m, int n,int*p)
{
	CDC *pDC = GetDC();
	CString str;
	pDC->FillSolidRect(CRect(m * 50 + 45, 610, m * 50 + 70, 630), RGB(255, 255, 255));//覆盖矩形区域的数字
	str.Format(TEXT("%d"), n);
	pDC->TextOutW(m * 50 + 45, 610, str);//数字位置

	p[m] = n;

}

void C排序算法的动态图形可视化View::OnGen10Nums()
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
	//CString str;
	//for (int i = 0;i < len;i++)
	//{
	//	a[i] = rand()%60;
	//	PenColor(0, 0, 0, i * 50 + 50, 600 - a[i] * 10);
	//	str.Format(TEXT("%d"), a[i]);
	//	pDC->TextOutW(i * 50 + 45,610, str);//数字位置
	//	//pDC->FillSolidRect(CRect(300, 300, 400, 350), RGB(0, 255, 255));//覆盖矩形区域的数字
	//}
	//ReleaseDC(pDC);
}

void C排序算法的动态图形可视化View::DisplayNums()
{
	CDC *pDC = GetDC();
	CString str;
	for (int i = 0;i < len;i++)
	{
		pDC->FillSolidRect(CRect(i * 50 + 45, 610, i * 50 + 70, 630), RGB(255, 255, 255));//覆盖矩形区域的数字
		PenColor(255, 255, 255, i * 50 + 50, 0);
		PenColor(0, 0, 0, i * 50 + 50, 600 - a[i] * 10);
		str.Format(TEXT("%d"), a[i]);
		pDC->TextOutW(i * 50 + 45, 610, str);//数字位置
		//pDC->FillSolidRect(CRect(300, 300, 400, 350), RGB(0, 255, 255));//覆盖矩形区域的数字
	}
	ReleaseDC(pDC);
}


void C排序算法的动态图形可视化View::Copy(int*p)
{
	for (int i = 0;i < len;i++)
	{
		p[i] = a[i];
	}
}

void C排序算法的动态图形可视化View::Onbubblesort()
{
	if (!(bubble || selection || quick))//当没有一个为true时
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

void C排序算法的动态图形可视化View::PenColor(int r,int g,int b,int x,int y)
{
	CDC *pDC = GetDC();

	CPen pPen;
	pPen.CreatePen(PS_SOLID, 10, RGB(r, g, b)); //黑色的笔宽度为10
	pDC->SelectObject(&pPen);
	pDC->MoveTo(x, 600);//利用CDC的成员函数画线
	pDC->LineTo(x, y);
	ReleaseDC(pDC);//牢记的是,在这里我们依然不要忘记释放DC
}
void C排序算法的动态图形可视化View::OnSelectionSort()
{
	
	if (!bubble || selection || quick)//当没有一个为true时
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



void C排序算法的动态图形可视化View::OnPause()
{
	//判断哪个为true，为true 的对应的计时器关闭
	if (bubble)KillTimer(1);
	else if (selection)KillTimer(2);
}


void C排序算法的动态图形可视化View::OnContinue()
{
	//判断哪个为true，为true 的对应的计时器开启
	if (bubble)SetTimer(1, 100, NULL);
	else if (selection)SetTimer(2,100,NULL);
}


void C排序算法的动态图形可视化View::OnOver()
{
	//判断哪个为true，为true 的对应的设置为false
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


void C排序算法的动态图形可视化View::OnSlow()
{
	// TODO: 在此添加命令处理程序代码
	sleeptime *= 2;
}


void C排序算法的动态图形可视化View::OnFaster()
{
	// TODO: 在此添加命令处理程序代码
	//if (sleeptime < 100)MessageBox();
	sleeptime /= 2;
}
