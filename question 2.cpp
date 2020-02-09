#include <iostream>
using namespace std;
int main()
{
	//kamus
	int mtrx [20][20];
	int i, j;
	
	//algoritma
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			cout << "elemen ke-[ " << i << "," << j << "]=";
			cin >> mtrx[i][j];
			
			
		}
	}
	
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			cout << mtrx[i][j] << " ";
			
			
		}
		cout << endl;
	}
	return 0;
}
