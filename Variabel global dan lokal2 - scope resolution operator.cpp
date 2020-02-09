// penggunaan :: atau yang biasa disebut sope resolution operator yang berfungsi untuk memanggil variabel gloal walaupun nama variabel sama denga variabel lokal
#include <iostream>
#include <string.h>
using namespace std;

string gvar = "belajarcpp.com"; //Global variabel (di luar int main() )



int main ()
{
	string gvar = "lokal variabel"; //Lokal variabel
    cout<<gvar<<endl;
    cout<<::gvar<<endl; //scope resolution operator
 
    return 0;
}
