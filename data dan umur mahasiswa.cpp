//Program yang dapat mengolah data IP mahasiswa
//program yang dapat menghitung nilai rata-rata umur dan memilih umur termuda beserta nama dan npm mahasiswanya
//Nama		: Silvia Naim
//Kelas		: Teknik Informatika B
//Matkul	: Algoritma & Pemrograman
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main ()
{
	//KAMUS
	ofstream	datamhs;
	string		nama[10]={"Silvia Naim", "Reistha Ramadhanty", "Putri Anggia", "Nilam Cahya", "Selvia Eldina", "Sarah Mustika", "Salma Irena",
						  "Nadia Miranti", "Tania Argadini", "Nabila Tusyifa"};
	float		rata;
	int			npm[10]={1915061018, 1915061022, 1915061042, 1915061012, 1915061007, 1915061001, 1915061030, 1915061049, 1915061015, 1915061041};
	int			umur[10]={18, 18, 15, 16, 20, 18, 18, 17, 19, 20}, jumlahumur = 0, min;
	
		
	//ALGORITMA

	datamhs.open("mhs.dat", ios::trunc); //buka file dengan mode rewrite. ios::trunc berfungsi untuk membuat file baru jika tdk ada file tersebut sebelumya
	datamhs << "=============== PROGRAM ===============" << endl;
	datamhs << "===== MENGELOLA DATA IP MAHASISWA =====" << endl;
	datamhs << endl;
	datamhs << "berikut merupakan data-data mahasiswa Teknik Informatika B : "<< endl;
	datamhs << endl;
	
	
	for(int i=0; i<10; i++)
	{
		cout << nama[i] << endl << npm[i] << endl << umur[i] << endl << endl;
		datamhs << nama[i] << endl << npm[i] << endl << umur[i] << endl << endl;
		jumlahumur = jumlahumur + umur[i];
		
	}
	datamhs.close();
	
	datamhs.open("umurmhs.dat", ios::trunc);	
	rata = jumlahumur/10;
	cout << "Rata-rata umur mahasiswa adalah = " << rata << " tahun" << endl;
	
	min=umur[0];
	
	for (int j=0; j<10; j++)
	{
		if (umur[j]<min)
		{	
			min=umur[j];
			cout	<< "Mahasiswa termuda umurnya adalah = " << min 	<< " tahun " << "atas nama " << nama[j] << ". " << "NPM " << npm[j] << endl;
			datamhs << "Rata-rata umur mahasiswa adalah = "	 << rata 	<< " tahun " << endl;
			datamhs << "Mahasiswa termuda umurnya adalah = " << min 	<< " tahun " << "atas nama " << nama[j] << ". " << "NPM " << npm[j] << endl;
				
		}
	
	}
	
	
	datamhs.close();

	return 0;
}
