//PROGRAM MEMBUAT BINTANG
#include <iostream>
using namespace std;

int main ()
{
	//KAMUS
	int N, i, sum;
	
	//ALGORITMA
	cin>>N;
	i=1; //elemen pertama
	
	do
	{
		cout<<i<<endl;
		sum+=i;
		i++;
		cout<<"*"<<endl;
		
	}
	while (i<=N);
	cout<<sum<<endl; //berhenti atau terminasi
	return 0;

}
