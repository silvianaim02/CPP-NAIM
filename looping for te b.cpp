//membuat pemrograman looping for bersarang
#include <iostream>
using namespace std;


int main ()
{
	for(int a=1; a<=10; a++)
	{
		for(int b=1; b<=a; b++)
		{
			cout<<(a*2)+b<<" ";
		}
		cout<<"\n";
	}
	system("pause");
	return 0;
}
/* pola
(1*2)+1
(2*2)+1   (2*2)+2
(3*2)+1   (3*2)+2   (3*2)+3
....

*/
