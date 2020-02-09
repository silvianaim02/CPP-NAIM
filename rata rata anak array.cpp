#include <iostream>
using namespace std;
int main ()
{
	float a[5];// bisa digunakan 1-5 . misal yang digukana hanya a[1] dan a[2] saja boleh
	float ratarata;
	cout<<"menampilkan array menghitung rata rata urur 2 orang siswa"<<endl;
	cout<<"masukan umur anak pertama : ";
	cin>>a[1];
	cout<<"masukan umur anak kedua : ";
	cin>>a[2];
	ratarata=(a[1]+a[2])/2 ;
	cout<<" jadi rata2nya adalah"<<ratarata<<endl;
	
	return 0;
}
