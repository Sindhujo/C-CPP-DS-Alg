#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2;
    // Read and save an integer, double, and String to your variables.
    //scanf("%d %lf %s", i2, d2, s2);
    cin >> i2;
    cin >> d2;
    cout << "enter the input string : " << endl;
    cin >> s2;
    cout << s2.length() << endl;
    // Print the sum of both integer variables on a new line.
    cout << i+i2 << endl;
    // Print the sum of the double variables on a new line.
    cout << d+d2 << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    
    cout << s+s2 << endl;
    return 0;
}