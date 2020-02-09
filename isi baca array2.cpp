//mengisi array dan menampilkan seluruh elemen pada array
#include <iostream>
using namespace std;
int main ()
{
	// KAMUS
	int TabInt [100];
	int i, neff;
	
	//ALGORITMA
	
	cout<<"masukan array yang anda inginkan : ";
	cin>>neff;//nilai efektif [0..100]
	cout<<endl;
	
	//mengisi array
	i=0;
	while (i<neff)
	{
		cin>>TabInt [i];
		i++;
		
	}//i =neff
	
	//menuliss isi array
	i=0;
	while (i<neff)
	{
		cout<< TabInt [i]<<endl;
		i++;
		
	}//i=neff
	
	return 0;
}
