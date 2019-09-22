#include <iostream>
using namespace std;

int main() {
    int * x;
    int size =3;
    x = new int[size];
cout << "value of x:" << x << endl;
       // cout << "value of x[i]:" << x[i] << endl;
        cout << "value of *x:" << *x << endl;
    for(int i=0; i<size;i++){
        x[i] = i+3;
        cout << "value of x:" << x << endl;
        cout << "value of x[i]:" << x[i] << endl;
        cout << "value of *x:" << *x << endl;
        
    }
    delete[] x;
}