#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
	ifstream fin;
	char kata;
	char angka;

	
	fin.open("masa.text");
	 if(!fin.fail())
       {
              cout<<"Isi dari File -> ";
              //ulang selama program belum mencapai akhir konten dari file
              while (!fin.eof())
              {
                     fin.get(kata);
                     cout<<kata;
              }
              fin.close(); //menutup file
       }else{
              cout<<"File tidak ditemukan"<<endl;
       }


	
	
}
