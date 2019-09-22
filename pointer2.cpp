#include  <iostream>
using namespace std;

int main() {

    int fv = 5, sv = 10;
    int * p1, * p2;
    p1 = &fv;
    cout << "first pointer p1 :" << p1 << endl;
    p2 = &sv;
    cout << "second pointer p2 :" << p2 << endl;
    *p1 = 20;
    cout << "p1 value pointed to by value : "<< *p1 << endl;
    p1 = p2;
    cout << "after assignment : first pointer p1 :" << p1 << endl;
    cout << "after assignment : second pointer p2 :" << p2 << endl;

   // *p2 = *p1;
    cout << "first pointer p1 :" << *p1 << endl;
    //p2 = &sv;
    cout << "second pointer p2 :" << *p2 << endl;

}