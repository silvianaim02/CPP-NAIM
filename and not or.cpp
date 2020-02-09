//not (!), and (&&) , or (||)
#include <iostream>
using namespace std;
int main()
{
	int a=2;
	int b=3;
	bool hasil;
	
	//not
	cout<<"untuk not"<<endl;
	hasil=!(a==2);
	cout<<hasil<<endl;
	
	//and
	cout<<"untuk and"<<endl;
	hasil=(a==2)and(b==3); // true and true = true
	cout<<hasil<<endl;
	
	hasil=(a==2)&&(b==2); //true and false = false
	cout<<hasil<<endl;
	
	hasil=(a==8)&&(b==3); //false and true = false
	cout<<hasil<<endl;
	
	hasil=(a==8)&&(b==6); //false and false = false
	cout<<hasil<<endl;
	
	//or
	cout<<"untuk or"<<endl;
	hasil=(a==2)or(b==3); // true or true = true
	cout<<hasil<<endl;
	
	hasil=(a==2)||(b==2); //true or false = trur
	cout<<hasil<<endl;
	
	hasil=(a==8)||(b==3); //false or true = true
	cout<<hasil<<endl;
	
	hasil=(a==8)||(b==6); //false or false = false
	cout<<hasil<<endl;
	
	
	return 0;
}
