//Mendeklarasikan sebuah array of integer berukuran 100
//Menuliskan ke layar berapa banyak elemen array dan jumlah total seluruh elemen
#include <iostream>
using namespace std;
int main ()
{
	cout << "  PROGRAM UNTUK MENAMPILKAN BANYAKNYA" << endl;
	cout << "ELEMEN DAN MENGHITUNG JUMLAH TOTAL ELEMEN" << endl;
	cout << endl;
	
	cout << "Keterangan :" << endl;
	cout << "1. inputkan nilai -999 untuk menghentikan program dan menampilkan banyak serta jumlah total dari elemen" << endl;
	cout << "2. maksimal penginputan nilai sebanyak 100 kali. setelah itu program dapat menampilkan banyak serta jumlah total dari elemen" << endl;
	cout << endl;
	
	//KAMUS
	int i, elemen[100], jumlah, X, neff, frek;
	
	//ALGORITMA
	//mengisi data nilai dari input user
	cout << "masukan nilai : \n";
	cin >> X;//[0..100]
	
	i = 0;
	frek = 0;

	

	while ( (X != -999) && (i < 100) )
	{
		
		if (elemen[i] == X)
		{
			frek = frek + 1;
			cin >> X;
			i++;
		}
		
	
	}
	
	
	while ( (X != -999) && (i < 100) )
	{
		
		elemen[i] = X;
		cin >> X;
		i++;
	
	}
	
	neff = i;
	i = 0; jumlah = 0;


	
	cout << "--------------------------------" << endl;
	cout << endl;	
	while ( i < neff)
	{
	
		jumlah = jumlah + elemen[i];
		cout << "index :" << elemen[i] << endl; 
		i++;
	}
	cout << "Banyaknya elemen = " << neff << endl;
	cout << "Jumlah total elemen = " << jumlah << endl;
	cout << "Frekuensi " << X << " = " << frek << endl;

	
	return 0;	
	
	
}
