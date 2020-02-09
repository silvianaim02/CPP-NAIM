#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
	//kamus
	ofstream outfile;
	
	int i, n, jumlahbal;
	
	//algoritma
	outfile.open("dataanakbalita.text", ios::trunc);
	n=1000;
	for (i=1; i<=n; i++)
	{
		cout << jumlahbal ;
		outfile<<jumlahbal<<endl;
		
	}
	outfile.close();
	return 0;
}
