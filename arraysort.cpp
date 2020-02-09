#include <iostream>
using namespace std;

int main ()
{
	int n, aaa;
	cout << "berapa banyak bilangan di array : ";
	cin >> n;
	
	//array (var) dibuat
	int *var = new int [n];
	//int var [5] ;
	//int var= {6,7,8,9,7}; 
	
	//ISI ARRAY
	for ( int i=0; i<n; i++)
		{
			cout << i+1 <<". no";
			cout << var[] <<endl;
		}
	
	for ( int i=0; i<n-1; i++)
	{
		for ( int j=0; j<n-1; j++ )
		{
			if (var[j]>var[j+1])
			{
				aaa=var[j];
			}
		}
	}
	
}
