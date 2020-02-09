#include <iostream> 
using namespace std;
	int fxkuadrat(int x);					 
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
	int hasil, p, x;
	x=3;
	
	//algoritma
	
	hasil = fxkuadrat(x); // hasil disini x = 3, bukan x=5 x=5 muncul setelah hasil.
	p = 10 + fxkuadrat(5);
	cout << hasil << " " << p << " " << fxkuadrat(10) << endl;
	return 0;
	// hasil = x * x + 3 * x - 5
	// p= 10 + fxkuadrat(5) = 10 + (25+15-5) = 45
	// fxkuadrat (10) = 100+30-5 = 12
	//makanya kalu dijalankam programnya hasilnya itu 13, 45, 125
}

	//REALISASI FUNGSI
	int fxkuadrat (int x)
{

	//Menghasilkan x * x + 3 * x – 5
	//KAMUS LOKAL
	//ALGORITMA
	return x * x + 3 * x -5;
}
