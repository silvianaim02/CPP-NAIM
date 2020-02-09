//program tebak kata
#include <iostream>
using namespace std;

void tebak (){
	string katakunci="Billal" , jawab; //menggunakann string karena akan ada inputan berupa kata atau kaliamat
	//kamus
	int a=0;
	
	//algoritma
	while (a<3)
	{
		cout<<"siapakah nama sahabat Rasulullah yang dikenal sebagai muadzin untuk beliau?"<<endl;
		cout<<"jawab = ";
		cin>>jawab;
		if (jawab==katakunci)
		{
		cout<<"jawaban anda benar :V\n";
		a+=3;	//tulisan jawaban anda benar hanya 1 kali. kenapa langsung ditulis a=+3 karena a<3 jadi bakal terakhir
		}	
		else
		{
		cout<<"jawaban anda tidak tepat\n\n";
		a++; //tulisan jawaban anda tidak tepat ada 3 kali
		}
	}

}

int main ()
{
	tebak ();
}
