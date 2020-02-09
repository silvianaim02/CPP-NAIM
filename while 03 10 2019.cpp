//PROGRAM JUMLAH ANGKA
//MENGHITUNG 1+2+3+...+N; N>0
#include <iostream>
using namespace std;

int main ()
{
	//KAMUS
	int N, i, sum;
	
	//ALGORITMA
	cin>>N;
	sum=0; //inisialisasi atau aksi
	i=1; //elemen pertama
	do
	{
		cout<<i<<endl;
		sum=sum+1;
		i=i+1;
		
	}
	while (i<=N);
	cout<<sum<<endl; //berhenti atau terminasi
	return 0;

}
