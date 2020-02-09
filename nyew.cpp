/* Buatlah program untuk membaca sekumpulan
bilangan bulat (integer) yang diakhiri -999 (-999 tidak
termasuk), dan mencetak banyaknya bilangan genap,
ganjil, positif, dan negatif. Bilangan 0 adalah bilangan
genap, tetapi tidak positif atau pun negatif.
*/

#include <iostream>
using namespace std;
int main()
{
	//kamus
	int N, genap=0, ganjil=0, pos=0, neg=0;
	
	cin >> N;
	
	
	//algoritma
	while (N !=-999) // berfungsi untuk menghentikan input
	{
		if (N%2 == 0)
		{
			genap++;
		}
		else // N%2 == !0
		{
			ganjil++;
		}
		
		if (N>0)
		{
			pos++;
		}
		else if (N<0)
		{
			neg++;
		}
		
		cin >> N;
	}
	
	cout << " bilangan genap ada : " << genap << endl;
	cout << " bilangan ganjil ada : " << ganjil << endl;
	cout << " bilangan positif ada : " << pos << endl;
	cout << " bilangan negatif ada : " << neg << endl;
	
	return 0;
	

}
