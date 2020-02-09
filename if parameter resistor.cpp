#include <iostream>																													//header
#include <cmath>//CMATH merupakan header untuk c++ yang berisi fungsi-fungsi, makro, tipe yang digunakan untuk operasi matematika   //header

using namespace std;
int main ()
{
	int TTD=21; // disini dalam arti tanda tangan berjumlah 21 didapatkan
	int DIARI=10; //artinya buku diari sudah ada 10 lembar yang ditulis
	
	if (TTD > 20) //jika tanda tangan lebih dari 20, maka...
	{
		if(DIARI> 9)//jika diari sudah ditulis 10 halamn, maka
		{
			cout<<"kamu diizinkan mengikuti RESISTOR"<<endl; /*karena telah memenuhi syarat, ttd lebih dari 20 yaitu 21. diari lebih dari 9 yaitu 10, maka akan 
			ada program yang menyatakan telah lulus parameter resistor. kalau tidak memenuhi, programnya akan kosong*/
		}
	}
}

/* jika ingin tidak banyak gunakan
if (ttd>20 && diari>9)
{
cout<<"..."<<endl;
}
