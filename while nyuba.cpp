#include <iostream>
using namespace std;

int main ()
{
	int a, sum;
	sum=0;
	a=1; // inisialisasi agar angka per tama yang muuncul karena di cout  jd 1
	do{
		cout << a << endl; //aksi
		sum = sum+ a;		//aksi
		a++;				//aksi
		
	}while (a<=10);			//kondisi pengulangan
	
	cout << sum << endl;
	
	return 0;
}
