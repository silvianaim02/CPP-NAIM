//program luas segitiga dg sub program
#include <iostream>
using namespace std;

//deklarasi fungsi 
int luassegitiga (int a,int t);
//luassegitiga menghasilkan 0,5*a*t

//program utama
int main () {
	//kamus
	int hasil,a,t;
	//algoritma
	hasil=luassegitiga (10,2);
	cout<<"luaassegitiga ="<<hasil<<endl;
	return 0;
	
}

//realisasi fungsi
int luassegitiga (int a,int t)
{
	//kamuslokal
	//algoritma
	return (0.5*a*t);
}
