// Cinput.cpp : 实现文件
//

#include "stdafx.h"
#include "排序算法的动态图形可视化.h"
#include "Cinput.h"
#include "afxdialogex.h"


// Cinput 对话框

IMPLEMENT_DYNAMIC(Cinput, CDialogEx)

Cinput::Cinput(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, m_input(_T(""))
{

}

Cinput::~Cinput()
{
}

void Cinput::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_input);
}


BEGIN_MESSAGE_MAP(Cinput, CDialogEx)
END_MESSAGE_MAP()


// Cinput 消息处理程序
