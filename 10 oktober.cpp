//judul dan sesifikasi program
#include <iostream>
using namespace std;
//deklarasi fungsi 
int fxkuadrat (int x);
//menghasilkan x*x+3*x-5
int fxpangkattiga (int x);
//menghasilkan x*x*x+5Px+6

//program utama
int main ()
{
	//kamus
	int x,p,q,hasil,hasil2;
	
	//algoritma
	x=3;
	hasil=fxkuadrat(x);
	hasil2=fxpangkattiga (x);
	p=10+fxkuadrat(5);
	q=10+fxpangkattiga(5);
	cout<<hasil<<""<<p<<""<<fxkuadrat(10)<<endl;
	cout<<hasil2<<""<<p<<""<<fxpangkattiga(10)<<endl;
	return 0;
}
//realisasi fungsi
int kuadrat (int x)
//menghasilkn x*x+3*x-5
{//kamus lokal
//algoritma
return (x*x+3*x-5);
}
int fxpangkattiga (int x)
//menghasilkan x*x*x+5*x*x+6
{//kamuslokal
//algoritma
return (x*x*x+5*x*x+6);
}
