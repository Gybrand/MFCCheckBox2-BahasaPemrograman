
// MFCApplication8Dlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "MFCApplication8.h"
#include "MFCApplication8Dlg.h"
#include "afxdialogex.h"
#include "stdio.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCApplication8Dlg dialog



CMFCApplication8Dlg::CMFCApplication8Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCAPPLICATION8_DIALOG, pParent)
	, m_rasa1(FALSE)
	, m_rasa2(FALSE)
	, m_rasa3(FALSE)
	, m_rasa4(FALSE)
	, m_harga1(0)
	, m_harga2(0)
	, m_harga3(0)
	, m_harga4(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication8Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Check(pDX, IDC_CHECK1, m_rasa1);
	DDX_Check(pDX, IDC_CHECK2, m_rasa2);
	DDX_Check(pDX, IDC_CHECK3, m_rasa3);
	DDX_Check(pDX, IDC_CHECK4, m_rasa4);
	//  DDX_Text(pDX, IDC_EDIT1, m_harga1);
	//  DDX_Control(pDX, IDC_EDIT2, m_harga2);
	//  DDX_Text(pDX, IDC_EDIT3, m_harga3);
	//  DDX_Text(pDX, IDC_EDIT4, m_harga4);
	DDX_Text(pDX, IDC_EDIT1, m_harga1);
	DDX_Text(pDX, IDC_EDIT2, m_harga2);
	DDX_Text(pDX, IDC_EDIT3, m_harga3);
	DDX_Text(pDX, IDC_EDIT4, m_harga4);
}

BEGIN_MESSAGE_MAP(CMFCApplication8Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_CHECK1, &CMFCApplication8Dlg::OnBnClickedCheck1)
	ON_BN_CLICKED(IDC_CHECK2, &CMFCApplication8Dlg::OnBnClickedCheck2)
	ON_BN_CLICKED(IDC_CHECK3, &CMFCApplication8Dlg::OnBnClickedCheck3)
	ON_BN_CLICKED(IDC_CHECK4, &CMFCApplication8Dlg::OnBnClickedCheck4)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCApplication8Dlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// CMFCApplication8Dlg message handlers

BOOL CMFCApplication8Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMFCApplication8Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCApplication8Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCApplication8Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCApplication8Dlg::OnBnClickedCheck1()
{
	
}


void CMFCApplication8Dlg::OnBnClickedCheck2()
{
	
}


void CMFCApplication8Dlg::OnBnClickedCheck3()
{
	
}


void CMFCApplication8Dlg::OnBnClickedCheck4()
{
	
}


void CMFCApplication8Dlg::OnBnClickedButton2()
{
	CString charga1, charga2, charga3, charga4;
	int tot, r1 = 0, r2 = 0, r3 = 0, r4 = 0;
	UpdateData(TRUE);
	if (m_rasa1) {
		r1 = (m_harga1);
	}
	if (m_rasa2) {
		r2 = (m_harga2);
	}
	if (m_rasa3) {
		r3 = (m_harga3);
	}
	if (m_rasa4) {
		r4 = (m_harga4);
	}
	tot = r1 + r2 + r3 + r4;
	SetDlgItemInt(IDC_EDIT5, tot);
}
