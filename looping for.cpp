//membuat pemrograman looping for bersarang
#include <iostream>
using namespace std;

int main ()
{
	for(int a=2; a<=10; a=a+1)
	{
		for(int b=1; b<=a; b++)
		{
			cout<<a+b<<" ";
		}
		cout<<"\n";
	}
	system("pause");
	return 0;
}
