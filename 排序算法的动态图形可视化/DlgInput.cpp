// DlgInput.cpp : 实现文件
//

#include "stdafx.h"
#include "排序算法的动态图形可视化.h"
#include "DlgInput.h"
#include "afxdialogex.h"


// CDlgInput 对话框

IMPLEMENT_DYNAMIC(CDlgInput, CDialog)

CDlgInput::CDlgInput(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOG1, pParent)
	, m_input(_T(""))
{

}

CDlgInput::~CDlgInput()
{
}

void CDlgInput::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_input);
}


BEGIN_MESSAGE_MAP(CDlgInput, CDialog)
	ON_BN_CLICKED(IDOK, &CDlgInput::OnBnClickedOk)
END_MESSAGE_MAP()


// CDlgInput 消息处理程序


void CDlgInput::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialog::OnOK();
}
