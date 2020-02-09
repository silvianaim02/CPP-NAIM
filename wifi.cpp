#include <ctime>
#include <iostream>
using namespace std;

int main() {
     srand(time(0));
     string lett = "abcdefghijklmnopqrstuvwxyz";
     string pass = "";
     pass += [rand() % lett.size - 1];
     cout << pass;

     return 0;
}
