#include <iostream>
using namespace std;

int hitungluas (int panjang, int lebar); //pengenalan terlebih dahulu

int main ()
{
	int a,b,hasil;
	cout<<"program hitung luas persegi panjang"<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"masukan nilai panjang :"; cin>>a;
	cout<<"masukan lebar:"; cin>>b;
	hasil=a*b;
	cout<<"hadlnya adalah "<<hasil<<endl;
	
	return 0;
	
}

int hitungluas (int panjang, int lebar)
{
	int luas=panjang*lebar;
	return luas;
}


