#include <iostream>
using namespace std;

int sumofN(int n) {
    /*
    int a =0;
    for (int i =1; i <= n; i++) {
        a = a + i;
    } */
    if (n==0)         return 0;
    else return sumofN(n-1) + n;
    
    //return a;
}

int main() {
    int n = 7;
    int b = sumofN(n);
    cout << "sum of n is :" << b << endl;
}