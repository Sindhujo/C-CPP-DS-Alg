#include <iostream>
using namespace std;

int * allocate_int() {

    int i = 3;
    return &i;
}

int main() {
    int * j;
   // j = allocate_int();
    //int k = *j;

    cout << "value of k:" << allocate_int() << endl;

    return 0;
}