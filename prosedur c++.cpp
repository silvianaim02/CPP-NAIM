//varibel lokal : hanya digunakan untuk algoritma didalam suatu ungsi atau prosedur saja
//variabel global : pada program utama dan juga pd fungsi prosedur
//parameter aktual : parameter yang disertakan saat pemanggilan fungsi atau prosedur
//parameter formal : parameter yang diletakan pada header sebuah fungdi atau prosedur

/* PROSEDUR adalah sekumpulan aloritma yang dibei nama dan dapat dipanggil untuk mengerjakan suatu dari instruksi algoritma tersebut .
prosedur dapat menggunakan parameter atau tidak. yang menbedakannya dengan fungsi adalah prosedur tidak dapat mengembalikan nilai return seperti fungsi.*/

//Judul dan spesifikasi program
#include <iostream>
using namespace std;
//deklarsi prosedur
void HITUNG_V (int R1, int A1, int *V1);

//program utama
int main ()
{
	//kamus
	int r ,a, vhasil;
	
	//algoritma
	cin>>r;
	cin>>a;
	HITUNG_V(r ,a , &vhasil);
	cout<<vhasil<<endl;
	
	return 0;
	

}

	//realisasi program
	void HITUNG_V (int R1, int A1, int *V1)
	{
		//algoritma
		*V1=R1*A1;
	}
