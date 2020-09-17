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
void QuaySo::hienThiKetQua()
{
	cout << "---------------------------------------------------------------------" << endl;
	cout << "Giai thuong" << "\t\t\t\t" << "Ket qua" << endl;
	cout << "---------------------------------------------------------------------" << endl;
	cout << "Giai DB" << setw(38) << giaiDacBiet << endl;
	cout << "Giai Nhat" << setw(36) << giaiNhat << endl;
	cout << "Giai Nhi" << setw(20) << giaiNhi[0] << setw(35) << giaiNhi[1] << endl;
	cout << "Giai Ba" << setw(16) << giaiBa[0] << setw(9) << giaiBa[1]
		<< setw(9) << giaiBa[2] << setw(9) << giaiBa[3]
		<< setw(9) << giaiBa[4] << setw(9) << giaiBa[5] << endl;
	cout << "Giai Tu" << setw(17) << giaiTu[0] << setw(14) << giaiTu[1] << setw(14) << giaiTu[2] << setw(14) << giaiTu[3] << endl;
	cout << "Giai Nam" << setw(14) << giaiNam[0] << setw(9) << giaiNam[1]
		<< setw(9) << giaiNam[2] << setw(9) << giaiNam[3]
		<< setw(9) << giaiNam[4] << setw(9) << giaiNam[5] << endl;
	cout << "Giai Sau" << setw(20) << giaiSau[0] << setw(15) << giaiSau[1] << setw(15) << giaiSau[2] << endl;
	cout << "Giai Bay" << setw(17) << giaiBay[0] << setw(14) << giaiBay[1] << setw(14) << giaiBay[2] << setw(14) << giaiBay[3] << endl;
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
