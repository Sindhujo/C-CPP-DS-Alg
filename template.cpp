#include <iostream>
//#include <vector>
using namespace std;

template <typename T>
T Mymax(T a, T b) {
  return (a>b?a:b);
}

int main() {
    cout << Mymax(3, 7) << endl;
    cout << Mymax("12ab", "ghi12") << endl;
    cout << Mymax("HELLO", "world") << endl;
    cout << Mymax("world341aqw", "Hello") << endl;

    //cout << max('a', 'g') << endl;
return 0;
}