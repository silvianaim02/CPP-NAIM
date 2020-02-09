/*

Anak ayam turunlah 5
Mati satu tinggallah 4
Mati satu tinggallah 3
Mati satu tinggallah 2
Mati satu tinggal induknya

Buatlah 3 versi program yang menerima masukan sebuah
integer positif > 0, misalnya N, dan menuliskan lirik lagu
Anak Ayam dengan memanfaatkan pengulangan:
– do-while
– while
– for

*/

#include <iostream>
using namespace std;
int main ()
{
	int N;
	N>0;
	
	
	cout << " anak ayam turunlah " ;
	cin  >> N; // banyak input
	cout << endl;
	
	for (N; N>2; N--)
	{
		cout<<" Mati Satu Tinggallah "<<N-1<<endl;
	}
	
	cout <<" Mati satu tinggal induknya"<<endl;
	
	return 0;
	
	
	
	
}


