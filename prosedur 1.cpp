//Judul dan spesifikasi program
#include <iostream>
using namespace std;
//deklarsi prosedur
void HITUNG_V (int R1, int A1, int *V1);

//program utama
int main()
{
	//kamus
	int r ,a, vhasil;
	
	//algoritma
	cin>>r;
	cin>>a;
	cout<<"sebelum= "<<r<<" "<<a<<" "<<vhasil<<endl; //1. sebelum pemanggilan
	HITUNG_V(r ,a , &vhasil); 
	cout<<"sesudah= "<<r<<" "<<a<<" "<<vhasil<<endl; //2. sesudah pemanggilan
	cout<<"maka tegangan = "<< vhasil <<endl;
	
	return 0;
	
}

//realisasi program
void HITUNG_V (int R1, int A1, int *V1)
{
	//algoritma
	*V1=R1*A1;
}
