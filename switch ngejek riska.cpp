#include <iostream>
using namespace std;

int main ()
{
	int pilihan;
	cout<<"1"<<endl;
	cout<<"2"<<endl;
	cout<<"3"<<endl;
	cout<<"4"<<endl<<endl;
	cout<<"---------------------------------"<<endl<<endl;
	cout<<"silahkan pilih opsi 1,2,3,4 : ";
	cin>>pilihan;
	
	switch (pilihan)
	{
		case 1:cout<<"Anda memilih naim cantikkk"<<endl; break;
		case 2: cout<<"Anda memilih riska nggak mandi"<<endl; break;
		case 3: cout<<"Anda memilih riska suka pikri"<<endl; break;
		case 4: cout<<"Anda memilih naim cantik"<<endl; break;
		
		default: cout<<"pilihan anda salah!! seharusnya anda memilih A,B,C atau D"<<endl; break;
	}
	
	return 0;
}
