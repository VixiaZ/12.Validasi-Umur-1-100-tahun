#include <iostream>
using namespace std;

int main ()
{
	int sekarang=2018;
	
	int thn = 0, tgl = 0, bln = 0;
	cout << "Masukan tanggal lahir kamu (TGL<spasi>Bulan<spasi>tahun) = ";
	cin >>tgl>>bln>>thn;
	
	if (thn>sekarang)
	{
		cout <<"Whatt!! Kamu dari masa depan !!! ?"<<endl;
	}
	
	if (tgl>31)
	{
		cout <<"Tanggal lebih dari 31 hari dalam sebulan ?"<<endl;		
	}
	
	if (bln>12)
	{
		cout <<"Bulan Lebih dari 12 Bulan apa itu ?"<<endl;
	}
	
	else
	{
		int tahun1,bulan1,tanggal1;			// ini adalah konversi nya by zulfikar
		tahun1 = (sekarang - thn) * 365;
		bulan1 = bln * 30;
		tanggal1 = tgl;
		
		const int semua = tahun1 + bulan1 + tanggal1;
		
		unsigned long long int thnkl,blnkl,tglkl,minggukl;
		thnkl = semua / 365;
		blnkl = semua / 30;
		tglkl = semua;
		minggukl = semua / 7;
		
		if (thn > 0 && bln>0 && tgl>0)
		{
			cout <<"Umur kamu adalah = \n"<<endl;
			cout <<thnkl<<" tahun"<<endl
				 <<blnkl<<" bulan"<<endl
				 <<tglkl<<" Hari"<<endl
				 <<minggukl<<" Minggu"<<endl;
		}
		
		else
		{
				cout <<"masukan ulang Tanggal lahir kamu"<<endl;
		}
	}
	return 0;
}
