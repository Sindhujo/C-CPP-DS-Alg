#include <iostream>
using namespace std;

int main() {
    int a=10;
    int * p;
    p = &a;
    cout << "valueof p" << p << endl;
    cout << "get value of a" << *p << endl;
}