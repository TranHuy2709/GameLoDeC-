#include "DangNhap.h"
void DangNhap::timTenNguoiChoi()
{
	string tenFile;
	cout << "Moi ban dang nhap: ";
	getline(cin, tenDangNhap);
	tenFile = "ThongTinNguoiChoi\\" + tenDangNhap + ".txt";
	fstream a(tenFile);
	string tienTrongTaiKhoan;
	if (a.is_open())
	{
		if (!a.eof())
		{
			getline(a, tienTrongTaiKhoan);
			tienVonHienCo = stoi(tienTrongTaiKhoan);
		}
		a.close();
	}
	else
	{
		dangKiMoi();
	}
}
void DangNhap::dangKiMoi()
{
	tenDangNhap = "";
	cout << "Ten dang nhap khong ton tai. Moi ban dang ki" << endl;
	cout << "Nhap ten: ";
	string taoMoiTk = "";
	getline(cin, tenDangNhap);
	taoMoiTk = "ThongTinNguoiChoi\\" + tenDangNhap + ".txt";
	fstream b(taoMoiTk, ios::out);
	int tienNap;
	cout << "Nhap so tien muon nap:";
	cin >> tienNap;
	tienVonHienCo = tienNap;
	b << to_string(tienNap);
	b.close();
}
void DangNhap::napTien()
{
	int tienNap;
	cout << "Nhap so tien muon nap them (Boi so cua 10.000):";
	cin >> tienNap;
	while (tienNap % 10000 != 0)
	{
		cout << "Nhap sai. Nhap lai: ";
		cin >> tienNap;
	}
	tienVonHienCo += tienNap;
	hienThiTienVon = hienThiTienGhi(tienVonHienCo);
	cout << "So tien ban hien co: " << hienThiTienVon << endl;
}
void DangNhap::hienThiThongTinNguoiChoi()
{
	cout << "Chao mung " << tenDangNhap << " da den voi game.";
	hienThiTienVon = hienThiTienGhi(tienVonHienCo);
	cout << "Ban dang co " << hienThiTienVon << " trong tai khoan." << endl;
}
void DangNhap::luuThongTinSauVongChoi(int a)
{
	string tenFile;
	tenFile = "ThongTinNguoiChoi\\"+ tenDangNhap + ".txt";
	fstream b(tenFile, ios::out);
	b << to_string(a);
	b.close();
}