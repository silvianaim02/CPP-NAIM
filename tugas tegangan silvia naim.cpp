// menghitung besarnya tegangan, hambatan, dan kuat arus
#include <iostream>
using namespace std;

int main () {
	// KAMUS
	float V,I,R;
	
	// ALGORITMA
	cout << "program ini untuk menghitung besarnya tegangan, hambatan, dan kuat arus :"<<endl;
	cout << " "<<endl;
	cout << "1). Menghitung Besarnya Tegangan : " <<endl;
	cout << "Masukan nilai : " <<endl;
	cout << "Besar arus (I) = ";
	cin >> I;
	cout << I <<" "<<" volt "<<endl;
	cout << "Besar hambatan (R) = ";
	cin >> R;
	cout << R <<" "<<" ohm "<<endl;
	cout << "Rumus Tegangan -> V=I*R "<<endl;
	V=I*R;
	cout << "Jadi, besarnya tegangan (V) = "<<V<<" volt "<<endl;
	cout << " "<<endl;
	

	
}
