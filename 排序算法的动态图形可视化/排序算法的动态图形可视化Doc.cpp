
// �����㷨�Ķ�̬ͼ�ο��ӻ�Doc.cpp : C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc ���ʵ��
//

#include "stdafx.h"
#include "Cinput.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�����㷨�Ķ�̬ͼ�ο��ӻ�.h"
#endif

#include "�����㷨�Ķ�̬ͼ�ο��ӻ�Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc

IMPLEMENT_DYNCREATE(C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc, CDocument)

BEGIN_MESSAGE_MAP(C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc, CDocument)
	ON_COMMAND(ID_EDIT_CHANGETEXT, &C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc::OnEditChangetext)

END_MESSAGE_MAP()


// C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc ����/����

C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc::C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc()
	: m_str(_T(""))
{
	// TODO: �ڴ����һ���Թ������

}

C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc::~C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc()
{
}

BOOL C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument()) return FALSE;
	m_str = "����, ���ĵ����������!";
	return TRUE;

}




// C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc ���л�

void C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc::Serialize(CArchive& ar)
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

// ����ͼ��֧��
void C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
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

// ������������֧��
void C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc::SetSearchContent(const CString& value)
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

// C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc ���

#ifdef _DEBUG
void C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc ����


void C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc::OnEditChangetext()
{
	
}

