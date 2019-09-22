#include <iostream>
#include "./cube/cube.h"
using namespace std;

int main() {
    cube * c1 = new cube;
    cube * c2 = c1;
    c2->setLength(2);
    cout << "length valuse set to:" << c2->getVolume() << endl;
    cout << "value of c1:" << c1 << endl;
    cout << "value of c2:" << c2 << endl;
    //cout << "value of *c1:" << *c1 << endl;
    //cout << "value of *c2:" << *c2 << endl;
   // delete c2;
 //c1 = nullptr;   
    //delete c1;
    cout << "value of c1:" << c1 << endl;
    cout << "length valuse set to:" << c1->getVolume() << endl;
    cout << "value of c2:" << c2 << endl;
    cout << "length valuse set to:" << c2->getVolume() << endl;
 
 //c2 = nullptr;
  c2 = new cube;
  c2->setLength(5);
  cout << "length valuse set to:" << c2->getVolume() << endl;
  cout << "length valuse set to:" << c1->getVolume() << endl;
 cout << "value of c1:" << c1 << endl;
 cout << "value of c2:" << c2 << endl;
    return 0;
}