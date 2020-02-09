#include <iostream>
using namespace std;
int main () {
int TT[10];
int j, k, x;
bool b;
for (j=10; j>=1;j--) {
TT[j-1] = j;
}
x = 5;
b = true;
k = 0;
while (b && (k <= 9)) {
if (TT[k] == x) {
	b = false;
} else {
cout << TT[k] << endl;
k = k + 1;
}
}
if (b)
cout << "bukan 5" << endl;
else
cout << "5" << endl;
return 0;
}
