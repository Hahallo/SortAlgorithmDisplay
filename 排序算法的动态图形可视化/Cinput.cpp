// Cinput.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�����㷨�Ķ�̬ͼ�ο��ӻ�.h"
#include "Cinput.h"
#include "afxdialogex.h"


// Cinput �Ի���

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


// Cinput ��Ϣ�������
