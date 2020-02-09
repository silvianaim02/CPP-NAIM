#include <iostream>
using namespace std;
int main ()
{
	//membuat array
	int nilai[5];
	nilai[0]=0;
	nilai[1]=1;
	nilai[2]=2;
	nilai[3]=3;
	nilai[4]=4;
	//indeks ulai dari 0-4
	cout<<&nilai[0]<<"nilainy adalah "<<nilai[0]<<endl;
	cout<<&nilai[1]<<"nilainy adalah "<<nilai[1]<<endl;
	cout<<&nilai[2]<<"nilainy adalah "<<nilai[2]<<endl;
	cout<<&nilai[3]<<"nilainy adalah "<<nilai[3]<<endl;
	cout<<&nilai[4]<<"nilainy adalah "<<nilai[4]<<endl;
	
	return 0;
	
}
