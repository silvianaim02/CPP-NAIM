#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    //KAMUS
    int TabInt [10]; int i;
    
    //ALGORITMA
    //mengisi array
    for (i=0; i<10; i++)
    {
      TabInt [i];
      cout << "masukan berapa kali perulangan " ;
      cin >> i;
    }
    
    for (i=0; i<10; i++)
    {
      cout<<TabInt [i] << endl;
    }
    return 0;
    
}