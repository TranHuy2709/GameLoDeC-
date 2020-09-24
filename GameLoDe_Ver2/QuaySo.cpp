#include "QuaySo.h"


void QuaySo::quayKetQua()
{
	srand(time(NULL));
	for (int i = 0; i < 8; i++)
	{
		switch (i)
		{
		case 0:
			giaiDacBiet = 10000 + rand() % (99999 + 1 - 10000);
			break;
		case 1:
			giaiNhat = 10000 + rand() % (99999 + 1 - 10000);
			break;
		case 2:
			giaiNhi[0] = 10000 + rand() % (99999 + 1 - 10000);
			giaiNhi[1] = 10000 + rand() % (99999 + 1 - 10000);
			break;
		case 3:
			for (int j = 0; j < 6; j++)
			{
				giaiBa[j] = 10000 + rand() % (99999 + 1 - 10000);
			}
			break;
		case 4:
			for (int j = 0; j < 4; j++)
			{
				giaiTu[j] = 1000 + rand() % (9999 + 1 - 1000);
			}
			break;
		case 5:
			for (int j = 0; j < 6; j++)
			{
				giaiNam[j] = 1000 + rand() % (9999 + 1 - 1000);
			}
			break;
		case 6:
			for (int j = 0; j < 3; j++)
			{
				giaiSau[j] = 100 + rand() % (999 + 1 - 100);
			}
			break;
		case 7:
			for (int j = 0; j < 4; j++)
			{
				giaiBay[j] = 10 + rand() % (99 + 1 - 10);
			}
			break;
		}
	}
}

void QuaySo::gotoXY(int x, int y)
{
	static HANDLE  h = NULL;
	if (!h)
	{
		h = GetStdHandle(STD_OUTPUT_HANDLE);
	}
	COORD c = { x,y };
	SetConsoleCursorPosition(h, c);
}
void QuaySo::controCho()
{
	for (int i = 0; i < 5; i++)
	{
		cout << ".";
		Sleep(400);
	}
}

void QuaySo::hienThiKetQua()
{
	cout << "---------------------------------------------------------------------" << endl;
	cout << "Giai thuong" << "\t\t\t\t" << "Ket qua" << endl;
	cout << "---------------------------------------------------------------------" << endl;
	cout << "Giai DB" << endl;				controCho();  gotoXY(7, 19);
	cout << setw(38) << giaiDacBiet << endl;

	cout << "Giai Nhat" << endl;			controCho();  gotoXY(9, 20);
	cout << setw(36) << giaiNhat << endl;

	cout << "Giai Nhi" << endl;             controCho();  gotoXY(8, 21);
	cout << setw(20) << giaiNhi[0] << endl;	controCho();  gotoXY(28, 21);
	cout << setw(35) << giaiNhi[1] << endl;

	cout << "Giai Ba" << endl; controCho(); gotoXY(7, 22);
	cout << setw(16) << giaiBa[0] << endl;  controCho();  gotoXY(23, 22);
	cout << setw(9) << giaiBa[1] << endl;   controCho();  gotoXY(32, 22);
	cout << setw(9) << giaiBa[2] << endl;   controCho();  gotoXY(41, 22);
	cout << setw(9) << giaiBa[3] << endl;   controCho();  gotoXY(50, 22);
	cout << setw(9) << giaiBa[4] << endl;   controCho();  gotoXY(59, 22);
	cout << setw(9) << giaiBa[5] << endl;

	cout << "Giai Tu" << endl;   controCho(); gotoXY(7, 23);
	cout << setw(17) << giaiTu[0] << endl;  controCho(); gotoXY(24, 23);
	cout << setw(14) << giaiTu[1] << endl;	controCho(); gotoXY(38, 23);
	cout << setw(14) << giaiTu[2] << endl;	controCho(); gotoXY(52, 23);
	cout << setw(14) << giaiTu[3] << endl;

	cout << "Giai Nam" << endl;  controCho(); gotoXY(9, 24);
	cout << setw(14) << giaiNam[0] << endl; controCho(); gotoXY(23, 24);
	cout << setw(9) << giaiNam[1] << endl;  controCho(); gotoXY(32, 24);
	cout << setw(9) << giaiNam[2] << endl;	controCho(); gotoXY(41, 24);
	cout << setw(9) << giaiNam[3] << endl;  controCho(); gotoXY(50, 24);
	cout << setw(9) << giaiNam[4] << endl;  controCho(); gotoXY(59, 24);
	cout << setw(9) << giaiNam[5] << endl;

	cout << "Giai Sau" << endl;				controCho(); gotoXY(8, 25);
	cout << setw(20) << giaiSau[0] << endl; controCho(); gotoXY(28, 25);
	cout << setw(15) << giaiSau[1] << endl;	controCho(); gotoXY(43, 25);
	cout << setw(15) << giaiSau[2] << endl;

	cout << "Giai Bay" << endl;				controCho(); gotoXY(8, 26);
	cout << setw(17) << giaiBay[0] << endl; controCho(); gotoXY(25, 26);
	cout << setw(14) << giaiBay[1] << endl; controCho(); gotoXY(39, 26);
	cout << setw(14) << giaiBay[2] << endl; controCho(); gotoXY(54, 26);
	cout << setw(14) << giaiBay[3] << endl;
}
int QuaySo::laySoDuoi(int a)
{
	int soDuoi = 0;
	int i = 0;
	do
	{
		int soDu = a % 10;
		a = a / 10;
		soDuoi += soDu * pow(10, i);
		i++;
	} while (i < 2);
	return soDuoi;
}
void QuaySo::laySoDuoiKetQua(int lotoDuoi[])
{
	for (int i = 0; i < 8; i++)
	{
		switch (i)
		{
		case 0:
			lotoDuoi[0] = laySoDuoi(giaiDacBiet);
			break;
		case 1:
			lotoDuoi[1] = laySoDuoi(giaiNhat);
			break;
		case 2:
			lotoDuoi[2] = laySoDuoi(giaiNhi[0]);
			lotoDuoi[3] = laySoDuoi(giaiNhi[1]);
			break;
		case 3:
			for (int j = 4; j < 10; j++)
			{
				lotoDuoi[j] = laySoDuoi(giaiBa[j - 4]);
			}
			break;
		case 4:
			for (int j = 10; j < 14; j++)
			{
				lotoDuoi[j] = laySoDuoi(giaiTu[j - 10]);
			}
			break;
		case 5:
			for (int j = 14; j < 20; j++)
			{
				lotoDuoi[j] = laySoDuoi(giaiNam[j - 14]);
			}
			break;
		case 6:
			for (int j = 20; j < 23; j++)
			{
				lotoDuoi[j] = laySoDuoi(giaiSau[j - 20]);
			}
			break;
		case 7:
			for (int j = 23; j < 27; j++)
			{
				lotoDuoi[j] = laySoDuoi(giaiBay[j - 23]);
			}
			break;
		}
	}
}
void QuaySo::tachSoTuString(int a[], string str)
{
	string so;
	int chiSo = 0;
	int i = 0;
	while (i < str.length())
	{
		so = "";
		for (i; i < str.length(); i++)
		{
			if (str[i+1] == ' ')
			{
				i=i+2;
				break;
			}
			so += str[i];
		}
		ketQuaMotLanQuay[chiSo] = stoi(so);
		chiSo++;
	}
}

void QuaySo::soXuatHienNhieuNhat()
{
	fstream a("KetQuaNamLanQuayGanNhat.txt");
	string dong;
	int chiSo2=0;
	if(a.is_open())
	{
		while(!a.eof())
		{
			getline(a, dong);
			for (int i = 0; i < 100; i++)
			{
				ketQuaMotLanQuay[i] = 0;
			}
			tachSoTuString(ketQuaMotLanQuay, dong);
			for (int i = 0; i < 100; i++)
			{
				tanSoXuatHien[chiSo2][i]=ketQuaMotLanQuay[i];
			}
			chiSo2++;
		}
	}
	a.close();
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			thongKeSoLan[1][i] += tanSoXuatHien[j][i];
		}
	}
	for (int i = 0; i < 100; i++)
	{
		thongKeSoLan[0][i] = i;
	}
	for (int i = 0; i < 99; i++)
	{
		for (int j = i + 1; j < 100; j++)
		{
			if (thongKeSoLan[1][i] < thongKeSoLan[1][j])
			{
				int temp = thongKeSoLan[1][j];
				thongKeSoLan[1][j] = thongKeSoLan[1][i];
				thongKeSoLan[1][i] = temp;
				temp = thongKeSoLan[0][j];
				thongKeSoLan[0][j]= thongKeSoLan[0][i];
				thongKeSoLan[0][i] = temp;
			}
		}
	}
	cout << "10 so xuat hien nhieu nhat trong 5 lan quay gan day." << endl;
	for (int i = 0; i < 10; i++)
	{

		cout << setw(10) << thongKeSoLan[0][i] << setw(10) << thongKeSoLan[1][i]<<endl;
	}
}
void QuaySo::ghiLaiTanSoXuatHien()
{
	for (int i = 3; i >=0; i--)
	{
		for (int j = 0; j < 100; j++)
		{
			tanSoXuatHien[i+1][j] = tanSoXuatHien[i][j];
		}
	}
	for (int i = 0; i < 100; i++) 
	{
		ketQuaMotLanQuay[i] = 0;
	}
	for (int i = 0; i < 27; i++)
	{
		ketQuaMotLanQuay[lotoDuoi[i]]++;
	}
	for (int i = 0; i < 100; i++)
	{
		tanSoXuatHien[0][i] = ketQuaMotLanQuay[i];
	}
	string ts;
	fstream a("KetQuaNamLanQuayGanNhat.txt",ios::out);
	for (int i = 0; i < 5; i++)
	{
		ts = "";
		for (int j = 0; j < 100; j++)
		{
			ts += to_string(tanSoXuatHien[i][j]);
			ts += ' ';
		}
		a << ts << endl;
	}
	a.close();
}
