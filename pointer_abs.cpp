#include <iostream>
#include <stdio.h>

using namespace std;


void updvalues(int * a, int * b) {
    int ua, ub;
    ua = *a + *b;
    if (*a > *b) ub = *a - *b; 
    else ub = *b - *a;

    *a = ua;
    *b = ub;  
}

int main() {
    int a, b;
    int * pa, * pb;
    pa = &a; pb = &b;
    cin >> a;
    cin >> b;
    updvalues(pa,pb);
    cout << "value of a and b" << a << " " << b << endl;
}
