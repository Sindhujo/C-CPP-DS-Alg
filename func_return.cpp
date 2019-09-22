#include <iostream>
using namespace std;

int add_num(int a,int b)
{
    int c = a +b ;
    return c;
}

int main() {

    int x,y,z;
    cout << "enter values of x and y" << endl;
    cin >> x;
    cin >> y;
    z = add_num(x,y);
    cout << "value of z is :" << z << endl;
}