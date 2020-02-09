//judul dan sesifikasi program
#include <iostream>
using namespace std;
//deklarasi fungsi 
int fxkuadrat (int x);
//menghasilkn x*x+3*x-5

int main ()
{
	//kamus
	int x, p, hasil;
	
	//algoritma
	x=3;
	hasil=fxkuadrat(x);
	p=10+fxkuadrat(5);
	cout<<hasil<<" "<<p<<" "<<fxkuadrat(10)<<endl;
	return 0;
}

//realisasi fungsi
int kuadrat (int x)
//menghasilkn x*x+3*x-5
{//kamus lokal
//algoritma
return (x*x+3*x-5);
}
