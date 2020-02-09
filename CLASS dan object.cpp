#include <iostream>
using namespace std;

//class dan object

class persegi
{
	public : // agar clss bisa diakses di luar kelas. bisa akses public atau akses privat
	int sisi; // anggta dari class
	int hitungluas ()//fungsi juga mengguanakan scope atau kurung kuarawal ya
	{
		return sisi*sisi;// member function atau method
	}
}; //jangan luapa semikolon ya

int main ()
{
	//object
	persegi p;//member acces operator
	p.sisi=4;
	
	cout << "sisi : " << p.sisi << endl;
	
	cin.get();
}
