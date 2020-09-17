#pragma once
#include "iostream"
#include "string"
#include "iomanip"
using namespace std;

class GhiDe
{
public:
	int soDe[5];
	int tienDe[5];
	int soluongDe;
	string hienThiTienGhi(int a);
	virtual void ghi();
	virtual void hienThi();

};

