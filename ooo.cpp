//PROGRAM MEMBUAT BINTANG
#include <iostream>
using namespace std;

int main ()
{
	//KAMUS
	int a, b, sum;
	a=1;
	
	//ALGORITMA 
	cout<<"masukan batas akhir :";
	cin>>b;
	sum=0;

	while (a<=b);
	{
		if (a%5==0)
		{
			cout<<"------\n";
		}
		else
		{
			cout<<"*\n";
		}
		sum=sum+a;
		a=a+1;
	}

	return 0;

}
