#include <iostream>
using namespace std;
int main ()
{
	string a, terjadi;
	int n=0;
	
	a="hujan";
	
	
	
	while (n<2)
	{
	cout << " hari ini apa yang sedang terjadi : ";
	cin >> terjadi;
		
	if (terjadi==a)
	{
		cout << "jika hujan, maka solusinya adalah memakai payung " << endl;
		n=+2;
	}
	else //jika jawaban selain hujan
	{
		cout << "kami belu menemukan solusi yang tepat\n " << endl;
		n++;
	}
	
}
	
	return 0;
}
