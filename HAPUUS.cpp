#include <iostream>
using namespace std;

int main ()
{
	//KAMUS
	int pilihan,A,B,C,D;
	
	//ALGORITMA
	cout<<"A"<<endl;
	cout<<"B"<<endl;
	cout<<"C"<<endl;
	cout<<"D"<<endl<<endl;
	cout<<"---------------------------------"<<endl<<endl;
	cout<<"silahkan pilih opsi A,B,C,D : ";
	cin>>pilihan;
	
	switch (pilihan)
	{
		case '': cout<<"Anda memilih naim cantikkk"<<endl; break;
		case B: cout<<"Anda memilih riska nggak mandi"<<endl; break;
		case C: cout<<"Anda memilih riska ga mandi"<<endl; break;
		case D: cout<<"Anda memilih naim cantik"<<endl; break;
		
		default : cout<<"salah, pilih opsi A,B,C atau D"<<endl;
	
	}
	
	return 0;
}
