//mencari indeks dimana nilai ditemukan
#include <iostream>
using namespace std;
int main ()
{
	// KAMUS
	int X, i, neff;
	bool found;
	int TabInt[10];
	
	//ALGORITMA
	//pengisian data : asumsi array terisi
	//nafF terdefinisi
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
	
	
	//mencari suatu nilai, yaitu mencari X
	
	cout<<"cari : ";
	cin>>X;
	i=0; found = false;
	while ((i<neff) && (!found))
	{
		if (TabInt[i]==X)
		{
			found = true;
		}
		
		else
		{
			i++;
		}
	}//i = neff atau found
	if (found)
	{
		//X ada di
		cout<<"angka"<<X<<" ada di indeks"<< i <<endl;
		i++;
	}
	else
	{
		//X tidak ada di
		cout<<"angka"<<X<<" tidak ada di indeks "<<endl;
	}

	
	return 0;
}
