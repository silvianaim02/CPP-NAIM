#include <iostream>
using namespace std;
int main(){
	
	//KAMUS
	int X,Y,Z;
	
	//mencari nilai x
	
	cout <<"mencari nilai X dari persamaan 12X-9Y+8Z=0"<<endl;
	cout<<" "<<endl;
	cout << "Masukan nilai Y : ";
	cin >> Y;
	cout << "Masukan nilai Z : ";
	cin >> Z;
	cout<<" "<<endl;
	
	if ((1<=Y) && (Y<=100) && (1<=Z) && (Z<=100) && (Y>Z)) 
	{
		X=(9*Y-8*Z)/12;
		cout<<"X="<<X<<endl;
	}
	
	else
	{
		cout<<"EROR!!, masukan nilai 1<= Y,Z <=100 serta nilai Y>Z "<<endl;
	}
		
	
	return 0;
	
}
