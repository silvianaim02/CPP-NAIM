#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    //KAMUS
    int TabInt [5]; int i;
    
    //ALGORITMA
    //mengisi array
    for (i=0; i<5; i++)
    {
      TabInt [i]=(i+1)*2;
    }
    
    for (i=0; i<5; i++)
    {
      cout<<TabInt [i] << endl;
    }
    return 0;
    
}