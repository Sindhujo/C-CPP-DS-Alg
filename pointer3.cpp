#include <iostream>
using namespace std;

int main() {

    int i = 1, j=2;
    int * ptr = &i;
    
    cout << "value of i:" << i << endl;
    cout << "value of ptr:" << ptr << endl;

    i = 3;
    cout << ">>>>>>>>>when i value is 3" << endl;
    cout << "value of i:" << i << endl;
    cout << "value of ptr:" << ptr << endl;
     cout << "value of *ptr:" << *ptr << endl;
    *ptr = 5;
    cout << ">>>>>>>>>when ptr value is 5" << endl;
    cout << "value of i:" << i << endl;
    cout << "value of ptr:" << ptr << endl;
    cout << "value of *ptr:" << *ptr << endl;
    ptr = &j;
    cout << ">>>>>>>>>when ptr value is j" << endl;
    cout << "value of i:" << i << endl;
    cout << "value of j:" << j << endl;
    cout << "value of ptr:" << ptr << endl;
    cout << "value of *ptr:" << *ptr << endl;
    j = i;
    cout << ">>>>>>>>>when j=i" << endl;
      cout << "value of i:" << i << endl;
    cout << "value of j:" << j << endl;
    cout << "value of ptr:" << ptr << endl;
    cout << "value of *ptr:" << *ptr << endl;
    *ptr = 10;
    cout << ">>>>>>>>>when ptr value is 10" << endl;
    cout << "value of i:" << i << endl;
    cout << "value of j:" << j << endl;
    cout << "value of ptr:" << ptr << endl;
    cout << "value of *ptr:" << *ptr << endl;

}