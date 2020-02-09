#include <iostream>
using namespace std;

int main ()
{
	
	int a=2;
	int b=3;
	bool hasil1,hasil2;
	
	//komparasi (membanddingkan)
	cout<<"keterangan :"<<endl;
	cout<<"0 = salah"<<endl;
	cout<<"1 = benar"<<endl<<endl;
	
	hasil1=(a==b); // tandaa == merupakan arti dari sebnding
	cout<<hasil1<<endl;
	
	hasil2=(a!=b); // tanda != merupakan tanda dari tidak sebanding
	cout<<hasil2<<endl;
	
	//kurang dari
	hasil1=(a<b);
	cout<<hasil1<<endl;
	
	//lebih dari
	hasil1=(a>b);
	cout<<hasil1<<endl;
	return 0;
}
