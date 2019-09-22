#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
   // scanf("%d \n", N);
   cin >> N;
    if (N < 1 || N > 1000)
        std::cerr << "N is out of range" << endl;
    int arr[N];
    for (int i=0; i<N;i++) {
        int a;
        cin >> a;
        if(a < 1 || a > 10000)
            std::cerr << "entered value is out of range" << endl;
        else  arr[i] = a;
    }
    cout << "printing array" << endl;
    for (int j=N-1;j>=0;j--) {
        
        cout << arr[j] << " ";
    }
    return 0;
}
