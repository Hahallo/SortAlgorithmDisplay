// DlgInput.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�����㷨�Ķ�̬ͼ�ο��ӻ�.h"
#include "DlgInput.h"
#include "afxdialogex.h"


// CDlgInput �Ի���

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


// CDlgInput ��Ϣ�������


void CDlgInput::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialog::OnOK();
}
