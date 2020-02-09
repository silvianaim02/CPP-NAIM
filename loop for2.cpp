//PROGRAM LOOPONG FOR DENGAN ADANYA PERMINTAAN PENGULANGAN
#include <iostream>
using namespace std;
int main ()
{
	int loop,jumlah;
	
	cout<<"masuka angka berapa kali anda ingin mengulang = ";
	cin>>jumlah;
	for (loop=1; loop<=jumlah; loop++)
	{
		cout<<endl;
		cout<<loop<<" inilah lopingnya";
	}
	return 0;
}
