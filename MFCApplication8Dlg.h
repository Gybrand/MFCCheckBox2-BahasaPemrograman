
// MFCApplication8Dlg.h : header file
//

#pragma once


// CMFCApplication8Dlg dialog
class CMFCApplication8Dlg : public CDialogEx
{
// Construction
public:
	CMFCApplication8Dlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION8_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnBnClickedCheck2();
	afx_msg void OnBnClickedCheck3();
	afx_msg void OnBnClickedCheck4();
	afx_msg void OnBnClickedButton2();
	BOOL m_rasa1;
	BOOL m_rasa2;
	BOOL m_rasa3;
	BOOL m_rasa4;
//	CString m_harga1;
//	CEdit m_harga2;
//	CString m_harga3;
//	CString m_harga4;
	float m_harga1;
	float m_harga2;
	float m_harga3;
	float m_harga4;
};
