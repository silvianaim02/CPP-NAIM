// File: lastOccX.cpp
// mencari indeks kemunculan terakhir elemen X pada array; -1 jika tidak ada
#include <iostream>
using namespace std;
int main ()
{ // Kamus
	int IX, X, i; //X adalah nilai yang akan dicari, IX adalah indeksnya
	int TabInt[10];
	bool found;
	// Algoritma
	// mengisi data nilai dari input user
	for (int i=0; i<10; i++)
		{
			cin >> TabInt[i];
		}
	cin >> X; // mencari suatu nilai, yaitu X
	i = 10; // Mencari mundur dari indeks terakhir
	while ((i >= 0) && (!found))
		{
			if (TabInt[i]==X)
				{
					found = true;
				} 
			else
				{
					i--;
				}
		} // i = -1 atau found
	IX = i; 
	cout << "Indeks terakhir " << X << " : " << IX << endl;
	return 0;
}
