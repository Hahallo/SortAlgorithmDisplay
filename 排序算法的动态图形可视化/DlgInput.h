#pragma once


// CDlgInput �Ի���

class CDlgInput : public CDialog
{
	DECLARE_DYNAMIC(CDlgInput)

public:
	CDlgInput(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgInput();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString m_input;
	afx_msg void OnBnClickedOk();
};
