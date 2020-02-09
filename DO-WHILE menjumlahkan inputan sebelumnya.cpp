#include <iostream>
using namespace std;
int main()
{
	int i, N, sum;
	sum = 0; //Inisialisasi-aksi
	i = 1; //First-Element
	do {
	cin >> N;
	sum = sum + N; //Alternatif: sum+=N;
	i = i + 1; //Next-element, Alternatif: i++;
	} while (i <= 10);
	cout << sum << endl; //Terminasi
	return 0;
}
