#include <iostream>
using namespace std;
void A(int*a, int *b);

int main ()
{
	//kamus
	int a1, b1, c1;
	
	//algoritma
	a1=1;
	b1=2;
	c1=3;
	
	A(&c1, &a1);
	A(&b1, &c1);
	
	cout << "a= " << a1 << ";b= " << b1 << ";c=" << c1 << endl;
	
	return 0;
}
// realisasi prosedur
void A(int*a, int *b)
{
	//kamus lokal
	int temp;
	
	//algoritma
	temp=*a;
	*a=*b;
	*b=temp;
}
