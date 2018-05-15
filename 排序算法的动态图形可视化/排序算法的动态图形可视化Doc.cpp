
// 排序算法的动态图形可视化Doc.cpp : C排序算法的动态图形可视化Doc 类的实现
//

#include "stdafx.h"
#include "Cinput.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "排序算法的动态图形可视化.h"
#endif

#include "排序算法的动态图形可视化Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C排序算法的动态图形可视化Doc

IMPLEMENT_DYNCREATE(C排序算法的动态图形可视化Doc, CDocument)

BEGIN_MESSAGE_MAP(C排序算法的动态图形可视化Doc, CDocument)
	ON_COMMAND(ID_EDIT_CHANGETEXT, &C排序算法的动态图形可视化Doc::OnEditChangetext)

END_MESSAGE_MAP()


// C排序算法的动态图形可视化Doc 构造/析构

C排序算法的动态图形可视化Doc::C排序算法的动态图形可视化Doc()
	: m_str(_T(""))
{
	// TODO: 在此添加一次性构造代码

}

C排序算法的动态图形可视化Doc::~C排序算法的动态图形可视化Doc()
{
}

BOOL C排序算法的动态图形可视化Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument()) return FALSE;
	m_str = "您好, 单文档界面的例程!";
	return TRUE;

}




// C排序算法的动态图形可视化Doc 序列化

void C排序算法的动态图形可视化Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		ar << m_str;
	}
	else
	{
		ar >> m_str;
	}
}

#ifdef SHARED_HANDLERS

// 缩略图的支持
void C排序算法的动态图形可视化Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// 修改此代码以绘制文档数据
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// 搜索处理程序的支持
void C排序算法的动态图形可视化Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// 从文档数据设置搜索内容。
	// 内容部分应由“;”分隔

	// 例如:     strSearchContent = _T("point;rectangle;circle;ole object;")；
	SetSearchContent(strSearchContent);
}

void C排序算法的动态图形可视化Doc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// C排序算法的动态图形可视化Doc 诊断

#ifdef _DEBUG
void C排序算法的动态图形可视化Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void C排序算法的动态图形可视化Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C排序算法的动态图形可视化Doc 命令


void C排序算法的动态图形可视化Doc::OnEditChangetext()
{
	
}

