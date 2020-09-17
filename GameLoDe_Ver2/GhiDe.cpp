#include "GhiDe.h"
void GhiDe::ghi()
{
	cout << "Ban duoc ghi toi da 5 so de." << endl;
	cout << "Nhap so luong so de muon ghi: ";
	cin >> soluongDe;
	while (soluongDe<0 || soluongDe>5)
	{
		cout << "Nhap sai. Nhap lai: ";
		cin >>soluongDe;
	}
	for (int i = 0; i < soluongDe; i++)
	{
		cout << "Nhap so de thu " << i + 1 << " :";
		cin >> soDe[i];
		while (soDe[i]<0 ||soDe[i]>99)
		{
			cout << "Nhap cac so trong khoang 0 den 99. Nhap lai: ";
			cin >> soDe[i];
		}
		cout << "Nhap so tien ghi (boi so cua 1000): ";
		cin >> tienDe[i];
		while (tienDe[i]<0 || tienDe[i]%1000!=0)
		{
			cout << "Nhap sai. Nhap lai: ";
			cin >> tienDe[i];
		}
	}
}
string GhiDe::hienThiTienGhi(int a)
{
	string temp;
	string so = "";
	temp = to_string(a);
	string tempNguoc;
	for (int i = temp.length() - 1; i >= 0; i--)
	{
		tempNguoc += temp[i];
	}
	string soNguoc;
	for (int i = 0; i < tempNguoc.length(); i++)
	{
		soNguoc += tempNguoc[i];
		if (i % 3 == 2 && i < tempNguoc.length() - 1)
		{
			soNguoc += ".";
		}
	}
	for (int i = soNguoc.length() - 1; i >= 0; i--)
	{
		so += soNguoc[i];
	}
	return so;
}
void GhiDe::hienThi()
{
	cout << "------------------------------------------------" << endl;
	cout << "   So De       ||      Tien De" << endl;
	for (int i = 0; i < soluongDe; i++)
	{
		string tien="";
		tien = hienThiTienGhi(tienDe[i]);
		cout << setw(6) << soDe[i] << setw(24) << tien  << endl;
	}
}
