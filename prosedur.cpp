#include <iostream>
using namespace std;

//deklarasi atau prototype prosedur
//int a merupakan parameter formal

void contohprosedur(int a);
void contohprosedur2 (int a);

//fungsi utama
int main ()
{
	int p=5;
	
	cout<<"===============================";
	cout<<"\n====Program Contoh Prosedur====\n";
	cout<<"===============================\n";
	
	//memanggil prosedur
	//panjang merupakan parameter aktual
	contohprosedur(p);
	contohprosedur2(p);
	
	return 0;
	
}

//contoh prosedur dimisalkan int panjang sebagai parameter input

void contohprosedur(int p)
{
	int l;
	int luas;
	
	cout<<"masukan lebar persegi panjang =";
	cin>>l;
	
	luas=p*l;
	
	cout<<"luas persegi panjang adalah = " << p<<" x " <<l << "=" <<luas<<endl;
}

//contoh proseadur
//dimisalkan int panjang sebagai parameter input

void contohprosedur2(int p)
{
	int keliling, l;
	
	cout<<"masukan lebar persegi panjang = ";
	cin>>l;
	
	keliling=(p+l)*2;
	
	cout<<"kellling persegi panjang adalah = (panjang+lebar)x2 = "<<"("<<p<<"+"<<l<<")"<<"x 2"<< "=" <<keliling<<endl;
	
}
