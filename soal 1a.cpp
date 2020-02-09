#include <iostream>
using namespace std;
int main () {
int X;
X = 100; X = 5;
if (X % 10 == 0) {
cout << "XXX " << endl;
if (X / 5 == 0) {
cout << "aaa" << endl;
}
if (X % 5 == 1) {
cout << "bbb" << endl;
}
} else {
cout << "YYY" << endl;
if (X / 4 == 0) {
cout << "ccc" << endl;
}
if (X % 4 == 1) {
cout << "ddd" << endl;
}
}
return 0;
}
