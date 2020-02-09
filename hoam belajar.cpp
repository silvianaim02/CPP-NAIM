//nama file ekternal
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
	ifstream myfile;
	string hoam;
	
	myfile.open("hoam.text");
	myfile >> hoam;
	cout << hoam << endl;
	
return 0;
}
