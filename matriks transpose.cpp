//mendefinisikan sebuah matriks
//matris transpose
/*
A = NBrs  NBrss  ==> A transpose = NKoll  NKol
    NKol  NKoll					   NBrss  NBrs
*/

#include <iostream>
using namespace std;
int main ()
{
	
	//KAMUS
	int M[10][10]; //DEKLARASI MATRRIKS
	int NBrs, NKol ; //baris dan kolom efektif
	int Mtrans[0][10];
	int NBrss, NKoll;
	int i, j;
	
	//ALGORITTMA
	//MENGISI MATRIKS
	//membaca isi matriks M 
	
	//deklarasi dan pengisian mtranspose
	NBrss = NKol;
	NKoll = NBrs;
	
	
	cout << "masukan berapa baris yang anda inginkan " ;
	cin >> NBrs;
	cout << endl;
	cout << "masukan berapa kolom yang anda inginkan " ;
	cin >> NKol;
	
	/*
	for (i=0; i<NBrss; i++)
	{
		for (j=0; j<NKoll; j++)
		{
			cout << "elemen ke- ["<<i<<"," <<j<<"] =" ;
			cin >> M[i][j] ;

		}
	}
	
	//menuliskan matriks ke layar
	cout << "tampilan matriks dibawah ini :"<<endl<<endl;
	for (i=0; i<NBrss; i++)
		{
			for (j=0; j<NKoll; j++)
			{
				cout << M[i][j] << " ";
			}
			cout << endl;
		}
	
	*/


	return 0;
}


