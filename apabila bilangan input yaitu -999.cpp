#include <iostream>
using namespace std;
int main ()
{
	//kamus
	int N, i, sum; // i = banyak bilangan
	float rata; //float digunakan jika hasilnya ada oma koma
	
	//algoritma
	sum=0;
	cout << " masukan angka yang ingin dijumlah :" ;
	cin >> N;
	
	while (N != -999)
	{
		i++;
		sum=sum+N;
		cin >> N;
	}
	
	rata=(float)sum/(float)i;
	
	if (i>0)
	{
		cout << "banyak bilangannya adalah : " << i << endl;
		cout << "jumlah seluruh nilai yang telah dinput : " << sum << endl;
		cout << "rata - rata : " << rata << endl;
	}
	
	
}
