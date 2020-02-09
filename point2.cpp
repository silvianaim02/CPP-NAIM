/*catetan:
integer kalo di memori ada 4 byte
POINTER : variabel yang berisi alamat variabel
a=4, tapi nilai dari alamatnya 203
-->penulisan: 
*/

#include <iostream> 
using namespace std;
int main (void)
{
	int v=7,*p;
	p=&v;
	
	cout <<"nilai v="<<v<<"dan*p="<<*p
	<<"\nAlamatnya="<<p<<'n';
	
}
