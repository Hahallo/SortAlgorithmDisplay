#pragma once


// Cinput �Ի���

class Cinput : public CDialogEx
{
	DECLARE_DYNAMIC(Cinput)

public:
	Cinput(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Cinput();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString m_input;
};
