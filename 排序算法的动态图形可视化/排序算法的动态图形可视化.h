
// �����㷨�Ķ�̬ͼ�ο��ӻ�.h : �����㷨�Ķ�̬ͼ�ο��ӻ� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�����㷨�Ķ�̬ͼ�ο��ӻ�App:
// �йش����ʵ�֣������ �����㷨�Ķ�̬ͼ�ο��ӻ�.cpp
//

class C�����㷨�Ķ�̬ͼ�ο��ӻ�App : public CWinAppEx
{
public:
	C�����㷨�Ķ�̬ͼ�ο��ӻ�App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�����㷨�Ķ�̬ͼ�ο��ӻ�App theApp;
