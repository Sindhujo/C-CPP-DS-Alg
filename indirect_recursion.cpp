#include <iostream>
using namespace std;

void fun2(int a);

void fun1(int a) {
    if(a > 0)
        {
            cout << a << endl;
            fun2(a-1);
        }
}
void fun2(int a) {
    if(a > 1)
        {
            cout << "in fun2 : " << a << endl;
            fun1(a/2);
        }
}

int main() {
    int n =20;
    fun1(n);

}