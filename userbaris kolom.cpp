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
	
	cout << "masukan berapa baris yang anda inginkan " ;
	cin >> NBrs;
	cout << endl;
	cout << "masukan berapa kolom yang anda inginkan " ;
	cin >> NKol;
	
	
	
	for (i=0; i<NBrs; i++)
	{
		for (j=0; j<NKol; j++)
		{
			cout << "elemen ke- ["<<i<<"," <<j<<"] =" ;
			cin >> M[i][j] ;
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

	
