#pragma once
#include "GhiDe.h"
#include "GhiLo.h"
#include "stdlib.h"
#include "time.h"

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
public:
	int lotoDuoi[27];
    void quayKetQua();
	void laySoDuoiKetQua(int a[]);
	void hienThiKetQua();
	int tienGhiDe = 0;
	int tienGhiLo = 0;
	int tienThangDe = 0;
	int tienThangLo = 0;
};

