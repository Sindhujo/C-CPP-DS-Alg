#include <iostream>
using namespace std;

int main() {
    int i,j;
    for (i=10;j=i*i;i--) {
        j = j-20;
        cout << i << " " << j << endl;
    }
}