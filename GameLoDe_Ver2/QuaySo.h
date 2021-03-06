#pragma once
#include "GhiDe.h"
#include "GhiLo.h"
#include "stdlib.h"
#include "time.h"
#include "windows.h"
#include "fstream"

class QuaySo :
    public GhiDe,public GhiLo
{
	int giaiDacBiet;
	int giaiNhat;
	int giaiNhi[2];
	int giaiBa[6];
	int giaiTu[4];
	int giaiNam[6];
	int giaiSau[3];
	int giaiBay[4];
	int laySoDuoi(int a);
	void gotoXY(int x, int y);
	void controCho();
	void tachSoTuString(int a[],string str);
public:
	int lotoDuoi[27];
	int ketQuaMotLanQuay[100];
	int thongKeSoLan[2][100];
	int tanSoXuatHien[5][100];
	void quayKetQua();
	void laySoDuoiKetQua(int a[]);
	void hienThiKetQua();
	void soXuatHienNhieuNhat();
	void ghiLaiTanSoXuatHien();
	int tienGhiDe = 0;
	int tienGhiLo = 0;
	int tienThangDe = 0;
	int tienThangLo = 0;

	QuaySo()
	{
		for (int i = 0; i < 27; i++)
		{
			lotoDuoi[i] = 0;
		}
	}
};

