// GameLoDe_Ver2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "GhiDe.h"
#include "GhiLo.h"
#include "QuaySo.h"
QuaySo qs;
GhiDe gd,*t;
GhiLo gl;
int tienVon = 1000000;
int tienGhiDe=0;
int tienGhiLo=0;
int tienThangDe = 0;
int tienThangLo = 0;

void ghi()
{
	char a;
	bool ktraGhiDe = true, ktraGhiLo = true;
GHI:
	if (ktraGhiDe == true)
	{
		cout << "Bam 1 neu muon ghi de." << endl;
	}
	if (ktraGhiLo == true)
	{
		cout << "bam 2 neu muon ghi lo." << endl;
	}
	cin >> a;
	while (a != '1' && a != '2')
	{
		cout << "Nhap sai. Nhap lai:";
		cin >> a;
	}
	if (a == '1' && ktraGhiDe == true)
	{
		gd.ghi();
		for (int i = 0; i < gd.soluongDe; i++)
		{
			tienGhiDe += gd.tienDe[i];
		}
		ktraGhiDe = false;
	}
	if (a == '2' && ktraGhiLo == true)
	{
		gl.ghi();
		for (int i = 0; i < gl.soluongLo; i++)
		{
			tienGhiLo += (gl.diemLo[i] * 23000);
		}
		ktraGhiLo = false;
	}
	if (ktraGhiDe == true || ktraGhiLo == true)
	{
		cout << "Ban co muon ghi tiep khong? Bam (Y) de ghi tiep.";
		char b;
		cin >> b;
		while (b == 'y' || b == 'Y')
		{
			goto GHI;
		}
	}
}
void hienThiTicket()
{
	cout << "--------------------------------------------------------------------" << endl;
	cout << "Thong tin ticket:" << endl;
    gd.hienThi();
    t = &gl;
    t->hienThi();
}
void hienThiKetQuaQuaySo()
{
	qs.quayKetQua();
	qs.laySoDuoiKetQua(qs.lotoDuoi);
	qs.hienThiKetQua();
}
void soSanhKetQua()
{
	cout << "Ban trung de so: ";
	for (int i = 0; i < gd.soluongDe; i++)
	{
		if (gd.soDe[i] == qs.lotoDuoi[0])
		{
			tienThangDe += (gd.tienDe[i] * 70);
			cout << gd.soDe[i] ;
		}
	}
	cout << endl;
	cout << "Ban trung lo so: ";
	for (int i = 0; i < gl.soluongLo; i++)
	{
		for (int j = 0; j < 27; j++)
		{
			if (gl.soLo[i] == qs.lotoDuoi[j])
			{
				tienThangLo += (gl.diemLo[i] * 80000);
				cout << gl.soLo[i] << ", ";
			}
		}
	}
	cout << endl;
}
void hienThiKetQua()
{
	string de, lo;
	de = gd.hienThiTienGhi(tienThangDe);
	lo = gd.hienThiTienGhi(tienThangLo);
	cout << "So tien thang de: " << de << endl;
	cout << "So tien thang lo: " << lo << endl;
}
void taoMoiTicket()
{
    for (int i = 0; i < 5; i++)
    {
        gd.tienDe[i] = 0;
        gd.soDe[i] = NULL;
    }
	for (int i = 0; i < 10; i++)
	{
		gl.diemLo[i] = 0;
		gl.soLo[i] = NULL;
	}
	tienGhiDe = 0;
	tienGhiLo = 0;
	tienThangDe = 0;
	tienThangLo = 0;
}

int main()
{
    string von;
    char ktraChoiTiep;
    do
    {   
		BAT_DAU_CHOI:
        ktraChoiTiep=' ';
		taoMoiTicket();
		von = gd.hienThiTienGhi(tienVon);
		cout << "Chao mung ban den voi Xo so Mien Bac. Mo thuong bat cu luc nao ban ghi." << endl;
		cout << "---------------------------------------------------------------------" << endl;
		cout << "So tien von cua ban: " << von << endl;
		cout << "Hay chon con so may man cho minh."<<endl;
        ghi();
		if (tienGhiDe + tienGhiLo - tienVon > 0)
		{
			cout << "Ban khong du tien ghi. Bam (Y) de ghi lai.";
			char ghiLai;
			cin >> ghiLai;
			if (ghiLai == 'y' || ghiLai == 'Y')
			{
				system("cls");
				goto BAT_DAU_CHOI;
			}
			else
			{
				break;
			}
		}
		else
		{	
			hienThiTicket();
			hienThiKetQuaQuaySo();
			soSanhKetQua();
			hienThiKetQua();
			tienVon = tienVon - tienGhiDe - tienGhiLo+tienThangDe+tienThangLo;
		}
        cout << "Nhap (Y) neu muon choi tiep" << endl;
        cin >> ktraChoiTiep;
        if (ktraChoiTiep == 'y' || ktraChoiTiep == 'Y')
        {
            system("cls");
			goto BAT_DAU_CHOI;
        }
        else
        {
            break;
        }
    } while (ktraChoiTiep == 'y' || ktraChoiTiep == 'Y');

}
