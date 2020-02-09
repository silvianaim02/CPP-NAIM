#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int nilaiAngka;
    string nim,nama,mata_kuliah,nilaiHuruf;
    
    cout<<"============================"<<endl;
    cout<<"NIM          : ";cin>>nim;
    cout<<"Nama         : ";cin>>nama;
    cout<<"Mata Kuliah  : ";cin>>mata_kuliah;
    cout<<"Nilai Matkul : ";cin>>nilaiAngka;
    cout<<"============================"<<endl;
    
    if(nilaiAngka >= 85 and nilaiAngka <= 100)
      nilaiHuruf = "A";
    else if(nilaiAngka >= 75)
      nilaiHuruf = "B+";
    else if(nilaiAngka >= 65)
      nilaiHuruf = "B";
    else if(nilaiAngka >= 50)
      nilaiHuruf = "C+";
    else if(nilaiAngka >= 45)
      nilaiHuruf = "C";
    else if(nilaiAngka >= 30)
      nilaiHuruf = "D+";
    else if(nilaiAngka >= 20)
      nilaiHuruf = "D";
    else if(nilaiAngka < 20)
      nilaiHuruf = "E";
    else
      nilaiHuruf = "tidak terdefinisi";
    
    cout<<endl;
   
    cout<<"============================"<<endl;
    cout<<"NIM          : "<<nim<<endl;
    cout<<"Nama         : "<<nama<<endl;
    cout<<"Mata Kuliah  : "<<mata_kuliah<<endl;
    cout<<"Nilai Matkul : "<<nilaiAngka<<endl;
    cout<<"Nilai Huruf  : "<<nilaiHuruf<<endl;
    cout<<"============================";
    
    return 0;
}