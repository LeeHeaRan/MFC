
// MFCproject085Dlg.h: 헤더 파일
//

#pragma once


// CMFCproject085Dlg 대화 상자
class CMFCproject085Dlg : public CDialogEx
{
// 생성입니다.
public:
	CMFCproject085Dlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCPROJECT085_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	COleDateTime m_timeMC; //캘린더 컨트롤 변수
	COleDateTime m_timeTP; //데이터피커 변수
	afx_msg void OnBnClickedButton2(); //입력 버튼
	CListBox m_listBox; //리스트박스 변수
	CString m_strDay; //에디트 컨트롤 변수
	afx_msg void OnBnClickedButton1(); //리스트 추가 변수
	afx_msg void OnBnClickedButton3(); //사용안함
};
