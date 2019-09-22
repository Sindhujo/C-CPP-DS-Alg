#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "enter the value of num" << endl;
	cin >> num;
	cout << "valueof num is :" << num << endl;
	int *p;
	p = &num ;
	cout << "address of num :" << p << endl;
	cout << "address lcoation of pointer &p :" << &p << endl;
	cout << "value in p" << *p << endl;
	int new_num = *p;
	cout << "new num value chnaged to:" << new_num << endl;
	*p = 42;
	cout << "num value chnaged to:" << num << endl;
}
