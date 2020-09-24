#pragma once
#include "GhiDe.h"
#include "fstream"

class DangNhap :
    public GhiDe
{
    
public:
	string tenDangNhap;
	int tienVonHienCo;
	string hienThiTienVon;
	void timTenNguoiChoi();
	void dangKiMoi();
	void napTien();
	void hienThiThongTinNguoiChoi();
	void luuThongTinSauVongChoi(int a);

};

