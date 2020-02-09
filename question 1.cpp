#include <iostream> 
using namespace std;
	int luas(double panjang, double lebar);					 
	// parameter tidak boleh kosong. parameter disitu yaitu x
	//Menghasilkan x * x + 3 * x - 5
int main ()	

	//***************************************//
	//		MENDEFIISIKAN SUATU PROGRAM		 //
	//***************************************//
	

	
	
	//***************************************//
	//		PEMAKAIAN SUATU FUNGSI			 //
	//***************************************//
	
	
{
	// untuk mengisi pada bagian ii juga dperlukan realisasi fungsi terlebih dahulu
	
	//kamus
	int hasil, panjang, lebar;
	panjang=1;
	lebar=2;
	
	//algoritma
	
	hasil = luas(panjang, lebar); // hasil disini x = 3, bukan x=5 x=5 muncul setelah hasil.
	cout << hasil << endl;
	return 0;
	// hasil = x * x + 3 * x - 5
	// p= 10 + fxkuadrat(5) = 10 + (25+15-5) = 45
	// fxkuadrat (10) = 100+30-5 = 12
	//makanya kalu dijalankam programnya hasilnya itu 13, 45, 125
}

	//REALISASI FUNGSI
	int luas(double panjang, double lebar)
{

	//Menghasilkan x * x + 3 * x – 5
	//KAMUS LOKAL
	//ALGORITMA
	return panjang*lebar;
}
