//integer merupakan bilangan bulat dan tidak boleh ada karakter. contonya tidak boleh ada koma dan angka dibelakangnya. ex : 6.45 itu tdk boleh. bolehnya 6
#include <iostream>
using namespace std;
int main()
{
	float a=7; //float untuk tipe data bilangan bulat dan karakter seperti koma titik dll
	float b=6;
	float hasil;
	
	//penjumlahan
	hasil=a+b;
	cout<<a<< "+"<<b<<"="<<hasil<<endl<<endl;
	
	//penguranagan
	hasil=a-b;
	cout<<a<<"-"<<b<<"="<<hasil<<endl<<endl;
	
	//perkalian
	hasil=a*b;
	cout<<a<<"*"<<b<<"="<<hasil<<endl<<endl;
	
	//pembagian
	hasil=a/b;
	cout<<a<<":"<<b<<"="<<hasil<<endl<<endl;
	

	return 0;
}
