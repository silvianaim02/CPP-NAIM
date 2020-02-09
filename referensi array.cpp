/* Program Mendekalarasikan Array berukuran 100
   Program akan berhenti jika anda memasukkan nilai -999
   Muhammad Bintang Pramadipta_1915061017*/

#include <iostream>
using namespace std;
int main()
{
	//Kamus 
	int TabInt[100];
	int a, b, i, sum, Neff;
	bool found;
	sum = 0;

	//Algoritma
	cout << "                             ----------------------------------------------------------------" << endl;
	cout << "                                        Program Untuk Memasukkan dan Menghitung Array " << endl;
	cout << "                             ----------------------------------------------------------------" << endl << endl;
	cout << "================================================================" << endl;
	for (i = 0; i < 100; i++) {
		cout << "Masukkan Nilai Array = ";
		cin >> a;
		if (a != -999) {
			b++;
			sum += a;
			TabInt[i] = a;
		}
		else {
			TabInt[i] = 0;
			i = 100;
		}
		Neff = i;
	}
	cout << "================================================================" << endl;
	cout << "Total Array yang Di input = " << b << endl;
	cout << "Jumlah Array Yang diinput = " << sum << endl;
	cout << "================================================================" << endl << endl;

	//Indeks Searching
	cout << "..............................................................." << endl;
	cout << "Masukkan Nilai yang Ingin Dicari = ";
	cin >> a;
	i = 0;
	found = false;
	b = 0;
	while (i < Neff) {
		if (TabInt[i] == a) {
			cout << "Angka " << a << " Terdapat di Indeks " << i << endl;
			b++;
		}
		i++;
	}


	if (b == 0) {
		cout << "Angka " << a << " Tidak ada di Indeks " << endl;
	}
	else {
		cout << "Frekuensi Kemunculan Angka = " << b << endl;
	}
	cout << "...............................................................";
	return 0;
}



