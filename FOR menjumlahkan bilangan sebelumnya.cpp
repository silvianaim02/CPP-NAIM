#include <iostream>
using namespace std;
int main()
{
	int i, N, sum;
	sum=0;
	for (i = 1; i <= 10; i++) {
	cin >> N;
	sum = sum + N; //Alternatif instruksi: sum+=N;
}
	cout << sum << endl; //Terminasi
return 0;
}
