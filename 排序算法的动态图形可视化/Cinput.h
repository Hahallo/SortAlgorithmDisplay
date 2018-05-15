#pragma once


// Cinput 对话框

class Cinput : public CDialogEx
{
	DECLARE_DYNAMIC(Cinput)

public:
	Cinput(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Cinput();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString m_input;
};
