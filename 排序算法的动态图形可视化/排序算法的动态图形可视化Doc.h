
// �����㷨�Ķ�̬ͼ�ο��ӻ�Doc.h : C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc ��Ľӿ�
//


#pragma once


class C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc : public CDocument
{
protected: // �������л�����
	C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc();
	DECLARE_DYNCREATE(C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~C�����㷨�Ķ�̬ͼ�ο��ӻ�Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
public:
	CString m_str;
	afx_msg void OnEditChangetext();
};
