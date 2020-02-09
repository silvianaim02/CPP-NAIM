//program ini akan menampilkan deret fibonacci
#include <iostream>
using namespace std;

int main () {
	int n;
	//masukan nilai n (batas banyaknya bilangan)
	cin>>n;
	int A=0, B=3, C;
	for (int i=0; i<n-1; i++)
	{
		if (i==0){
			cout<<A<<" "<<B<<" ";
		}
		else {
			C=A+B;
			A=B;
			B=C;
			cout<<C<<" ";
		}
	}
}
