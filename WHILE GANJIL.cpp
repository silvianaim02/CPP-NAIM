//PROGRAM JUMLAH ANGKA
//MENGHITUNG 1+2+3+...+N; N>0
#include <iostream>
using namespace std;

int main ()
{
	//KAMUS
	int N, i, sum;
	
	//ALGORITMA
	//ALGORITMA
	cout<<"masukan batas akhir :";
	cin>>N;
	cout<<" "<<endl;
	i=1;
	
	//elemen pertama
	do
	{
		cout<<i<<endl;
		sum=sum+2;
		i=i+2;
		
	}
	while (i<=N);
	cout<<sum<<endl; //berhenti atau terminasi
	return 0;
	
}


