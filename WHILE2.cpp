//WHILE
#include <iostream>
using namespace std;
int main ()
{
	//kamus
	int a, sum, N;
	cout << "masukan berapa kali anda ingin mengulang : ";
	cin >> N;
	sum=0;
	a=1;// first elemn ditulis disini dullu yaitu satu
	while (a<=N)//kondisi pengulangan
	{
		cout << a << endl;
		sum+=a;
		a++;//aksi
		//next element
	}
	
	cout << sum <<endl;
	//kondisi false
	//terminasi
}
