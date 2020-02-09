//file eksternal
//untuk menyimpannya di data base ==> data text (notepad)
// tahap : menuliskan ==> membaca ==> mengedit ==> delete
#include <iostream>
#include <fstream>//stream ke file eksternal
// ofstream. memasukan dari program ke notepad
// instream
// fstream
using namespace std;
int main ()
{
	ofstream myfile; //sama seperti tipe data namun ini membaca ada file eksternal. myfile disini sebagai variabel
	//ios::out = defult, opersi output
	//ios::app (append) = menuliskan pada akhir baris
	//ios::trunc = default, membuat file jika tidak ada
	string nama;
	
	myfile.open("data1.text",ios::out);
	myfile << "menuliskan data baru pada data 1";
	myfile.close();
	
	myfile.open("data2.text",ios::trunc);
	myfile << "menuliskan data baru pada data 2";
	myfile.close();
	
	myfile.open("data3.text", ios::app);
	myfile << "menuliskan data baru pada data 3";
	cout << "siapa nama anda : ";
	cin >> nama;
	

	
	myfile << nama <<endl;
	myfile.close();

}
