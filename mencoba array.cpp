
// menghitung frekuensi kemunculan elemen X pada array
#include <iostream>
using namespace std;
int main ()
{// KAMUS
int frek, i, X;
int elemen[10];
// Algoritma
// mengisi data nilai dari input user
cout << "masukan nilai :"<<endl;
cin >> X; 
for (i=0; i<10; i++) 
	{
		cin >> elemen[i];
	}

// Nilai yang dicari
// menghitung frekuensi X

frek = 0;
for (i=0; i<10; i++)
{
	if (elemen[i]==X)
		{
			
			frek = frek + 1;
		}

}
cout << "Frekuensi " << X << " = " << frek << endl;
return 0;
}	


