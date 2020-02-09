//mendefinisikan sebuah matriks
#include <iostream>
using namespace std;
int main ()
{
	
	//KAMUS
	int M[10][10]; //DEKLARASI MATRRIKS
	int NBrs, NKol ; //baris dan kolom efektif
	int i, j;
	
	//ALGORITTMA
	//MENGISI MATRIKS
	NBrs  = 10;
	NKol = 10;
	
	for (i=0; i<NBrs; i++)
	{
		for (j=0; j<NKol; j++)
		{
			M[i][j] = i*j;
		}
	}
	//menuliskan matriks ke layar
	for (i=0; i<NBrs; i++)
		{
			for (j=0; j<NKol; j++)
			{
				cout << M[i][j] << " ";
			}
			cout << endl;
		}
}

	
