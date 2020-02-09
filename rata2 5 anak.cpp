#include <iostream>
using namespace std;
int main(){
	//KAMUS
	float t1,t2,t3,t4,t5, Mean;
	
	//ALGORITMA
	cout << "Masukan tinggi anak 1 : ";
	cin >> t1;
	cout << "Masukan tinggi anak 2 : ";
	cin >> t2;
	cout << "Masukan tinggi anak 3 : ";
	cin >> t3;
	cout << "Masukan tinggi anak 4 : ";
	cin >> t4;
	cout << "Masukan tinggi anak 5 : ";
	cin >> t5;
	
	Mean = (t1+t2+t3+t4+t5)/5;
	cout << "Rata-Rata berat badan lima anak adalah (Mean) = "<<" "<<"cm"<<endl;
	
	return 0;
}
