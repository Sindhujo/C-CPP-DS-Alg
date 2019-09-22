#include <iostream>
using namespace std;

int fun(int a) {
    if(a > 100)
        {
            cout << a << endl;
            return a-10;
        }
        else {
        cout << a << endl;
            return fun(fun(a+11));
        }
}

int main() {
    int n =96;
    fun(n);

}