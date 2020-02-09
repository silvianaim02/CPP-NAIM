#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
	//Jika kode buku = 1 maka judul buku = Belajar C++, dengan kode Diskon = S, maka harganya 45000, Jika kode Diskon bukan s maka harganya 50000
	char kodeBuku, kodeDiskon, namaBuku[10];
	long harga=0; // untuk menetralkan saja
	
	cout << " masukan kode buku untuk melihat judul buku : "; cin >> kodeBuku;
	cout << " masukan kode diskon untuk mendapatkan diskon pembelian buku : "; cin >>kodeDiskon;
	
	//***********************************************
	
	if (kodeBuku=='1')
	{
		strcpy(namaBuku,"Belajarcpp.com");
		if (kodeDiskon=='S' || kodeDiskon=='s')
		{
			harga=45000;
		}
		else
		{
			harga=55000;
		}
	}
	
	//***********************************************
	
	else if (kodeBuku=='2')//pilihan lain
	{
		strcpy(namaBuku, "belajar c++");
		if (kodeDiskon=='S' || kodeDiskon=='s')
		{
			harga=65000;
		}
		else
		{
			harga=70000;
		}
	}
	
	else//jika tidak
	{
		cout << " salah kode buku !" << endl;
	}
	
	cout << "Judul buku : " << namaBuku << endl;
	cout << "Harga buku : " << harga << endl;
	

	
	return 0;
	
	
}
