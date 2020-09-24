#include "GhiLo.h"
void GhiLo::ghi()
{
	cout << "Ban duoc ghi toi da 5 so lo." << endl;
	cout << "Nhap so luong so lo muon ghi: ";
	cin >> soluongLo;
	while (soluongLo < 0 || soluongLo>5)
	{
		cout << "Nhap sai. Nhap lai: ";
		cin >> soluongLo;
	}
	for (int i = 0; i < soluongLo; i++)
	{
		cout << "Nhap so lo thu " << i + 1 << " :";
		cin >> soLo[i];
		while (soLo[i] < 0 || soLo[i]>99)
		{
			cout << "Nhap cac so trong khoang 0 den 99. Nhap lai: ";
			cin >> soLo[i];
		}
		cout << "Nhap so diem muon ghi: ";
		cin >> diemLo[i];
		while (diemLo[i] < 0)
		{
			cout << "Nhap sai. Nhap lai: ";
			cin >> diemLo[i];
		}
	}
}
void GhiLo::hienThi()
{
	cout << "------------------------------------------------" << endl;
	cout << "   So Lo       ||      so Diem      ||     Tien Lo" << endl;
	for (int i = 0; i < 5; i++)
	{
		string tien = "";
		tien = hienThiTienGhi(diemLo[i]*23000);
		cout << setw(6) << soLo[i] << setw(21) <<diemLo[i]<<setw(23)<< tien << endl;
	}
}