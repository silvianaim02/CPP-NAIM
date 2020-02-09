#include <iostream>
using namespace std;
int main ()
{
	int i, sum, N;//kenapa N? karen N kan otomatis di input oleh user sedangkan jika menggunakan i, akan menyebabkan bilangan berurutan dan bukan user yang menginputkan
	sum=0;

	for (i=1; i<=10; i++)
	{
		cin >> N;
		sum=sum+N;
	}
	
	cout << sum << endl;
}
