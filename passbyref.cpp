#include <iostream>
using namespace std;

int f (int &x, int c) 

{

    c--;

if (c == 0) return 1; 

x = x + 1; 

return f(x,c) * x;

        }

        int main() {
            int a=5;
            int &b = a;
           // b =a;
            cout << f(b,a) << endl;

        }