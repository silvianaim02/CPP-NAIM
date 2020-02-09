//membuat pemrograman looping for bersarang
#include <iostream>
using namespace std;

int main ()
{
	for(int a=1; a<=10; a++)//1*1
	{
		for(int b=1; b<=a; b++)
		{
			cout<<(a*b)+2<<" ";
		}
		cout<<"\n";
	}
	system("pause");
	return 0;
}
