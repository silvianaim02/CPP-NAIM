//mendefinisikan sebuah matriks
#include <iostream>
using namespace std;
int main ()
{
	
	//KAMUS
	int M[10][10]; //DEKLARASI MATRRIKS
	int NBrs, NKol ; //baris dan kolom efektif
	int i, j, x;
	
	//ALGORITTMA
	//MENGISI MATRIKS
	//membaca isi matriks
	
	//mengalikan elemen matriks dengan x
	
	cout << "faktor paengali dengan matriks";
	cin >> x;
	
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
			M[i][j] = M[i][j] * x;
		}
	}
	
	//menuliskan matriks ke layar
	cout << "tampilan matriks dibawah ini :"<<endl<<endl;
	for (i=0; i<NBrs; i++)
		{
			for (j=0; j<NKol; j++)
			{
				cout << M[i][j] << " ";
			}
			cout << endl;
		}


	return 0;
}


