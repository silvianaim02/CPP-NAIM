#include <iostream>
using namespace std;//biar cout nya ga error. soalnya kalo ga dikasing sung name space std,  harus dikasi std:: sesudah cout dan setelahnya
int main (){
	int a; //{deklarasi} int adalah pembaca bilangan bulat. nilai a belum diketahui. tapi karena ada integer yang menandakan bahwa a merupakan bil bulat.
	a=1;//a sudah diketahui sebagai bil bulat. dan terbaca karena sudah terdeklarasi
	cout<<a<<endl;
	cin>>a;
	return 0;
}
