#include <iostream>
using namespace std;

int func(int i) {
    int n;
    cout << "entered value is : " << i << endl;
    if(i > 0) {
        n=i*2;
        func(i-1);
        cout << "value of n : " << n << "for i : " << i << endl;
    }
    return n;
}

int main() {
    int a,b;
    a = 4;
    b = func(4);
    cout << "value of b is : " << b << endl;
} 