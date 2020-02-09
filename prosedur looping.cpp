/*------SOAL-4-----

-membaca sejumlah N bilangan integer dari keyboard dan menghasilkan SUM (jumlah dari seluruh bilangan yang dimasukan)
-I.S. (intial state -> keadaan awal sebelum prosedur) : N terdefinis, N>0
-F.S. (final state -> keadaan akhir sesudh prosedur) : SUM merupakan jumlah N bilangan

*/

#include <iostream>
using namespace std;

//deklarasi prosedur atau variabel global
void bacadanjumlahbil (int N, int *sum);

int main ()
{
	int loop,n,sum;
	
	cout<<"masukan angka berapa bilangan yang ingin anda jumlahkan = ";
	cin>>n;
	for (loop=1; loop<=n; loop++)
	{
		cin>>loop;
	}
	
	return 0;
}

void bacadanjumlahbil (int N, int *sum)
{
	bacadanjumlahbil (int N, int *sum);
}



