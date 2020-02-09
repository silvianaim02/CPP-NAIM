//program luas bola dg sub program
#include <iostream>
using namespace std;

//deklarasi fungsi 
int vbola (int r);
//volumebola menghasilkan (4*phi*r*r*r)/3

const float phi=3.14;

//program utama
int main () {
	//kamus
	float hasil,r;
	//algoritma
	hasil=vbola (10);
	cout<<"volume bola ="<<hasil<<endl;
	return 0;
	
}

//realisasi fungsi
int vbola (int r)
{
	//kamuslokal
	//algoritma
	return ((4*phi*r*r*r)/3);
}
