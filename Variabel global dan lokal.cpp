#include <iostream>
#include <string.h>
using namespace std;

string gvar = "belajarcpp.com"; //Global variabel (di luar int main() )

void fungsilain()
{
    cout<<gvar<<endl;
}


int main ()
{
	string lokal_var = "lokal variabel"; //Lokal variabel
    cout<<gvar<<endl;
    fungsilain();
 
    cout<<lokal_var<<endl;
 
    return 0;
}
