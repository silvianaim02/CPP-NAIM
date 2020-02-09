//fungsi subprogram

#include <iostream>
using namespace std;

void jumlah ();
void bagi();

int main () 
{
	int opsi;
	
	cout<<"dua subprogram"<<endl;
	cout<<"1. JUMLAH dua angka;"<<endl;
	cout<<"2. BAGI dua angka;"<<endl<<endl;
	
	cout<<"pilih mana yang ingin anda lakukan:";
	cin>> opsi;
	
	switch (opsi)
	{
		case 1:
			jumlah ();
			break;
			
		case 2:
			bagi ();
			break;
			
		default :
			cout<<"salah input. wkwkwk"<<endl;
	}
}

void jumlah ()//subprogram 1
{
	double a, b;
	cout<<" nomor 1 =";
	cin>> a;
	cout<<" nomor 2 =";
	cin>> b;
	
	cout<<"HASIL JUMLAHNYA ADALAH = "<<"a+b"<<endl;
	cout<<endl;
	
}

void bagi()//subprogram 2
{
	double x,y;
	cout<<" nomor 1= ";
	cin>>x;
	cout<<" noor 2 = ";
	cin>>y;
	
	cout<<"HASIL BAGINYA ADALAH = "<<x/y<<endl;
	
}
