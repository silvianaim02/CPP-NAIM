#include <iostream>
using namespace std;

int Max5 (int a, int b, int c, int d, int e); //pengenalan ke fungsi

int main ()
{
	int a,b,c,d,e;

//Algoritma
	cout<<"masukan nilai a :";
	cin>>a;
	cout<<"masukan nilai b :";
	cin>>b;
	cout<<"masukan nilai c :";
	cin>>c;
	cout<<"masukan nilai d :";
	cin>>d;
	cout<<"masukan nilai e :";
	cin>>e;
	cout<<"nilai terbesar :";
	cout<<Max5(a,b,c,d,e) <<endl;
	 
}

int Max2 (int a, int b)
{
		//Algoritma
		if (a>=b){
			return a;
		}
		else {
			return b;
		}
}

int Max3 (int a, int b, int c)
{
	return Max2 (Max2(a,b),c);
}

int Max5 (int a, int b, int c, int d, int e)
{
	return Max3(Max2(a,b),Max2(c,d),e);
}


