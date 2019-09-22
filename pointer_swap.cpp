#include <iostream>
using namespace std;

int main() {
    int a=10, b=20;
    int * p1 = &a, * p2 = &b;
    
    cout << "before swap : value of p1 : " << p1 << endl;
    cout << "before swap : value of p2 : " << p2 << endl;
    cout << "before swap : value of *p1 : " << *p1 << endl;
    cout << "before swap : value of *p2 : " << *p2 << endl;
    p2 = &a;
    p1 = &b;
    
    cout << "after swap : value of p1 : " << p1 << endl;
    cout << "after swap : value of p2 : " << p2 << endl;
    cout << "after swap : value of *p1 : " << *p1 << endl;
    cout << "after swap : value of *p2 : " << *p2 << endl;
    cout << "after swap : value of a : " << a << endl;
    cout << "before swap : value of b : " << b << endl;
 
}