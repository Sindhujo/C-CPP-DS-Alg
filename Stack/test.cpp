#include <iostream>
#include <stack>

using namespace std;

int main() {
    std::stack<int> s;
    std::stack<int> rs;

    //int p =7;
   // s.push(p);
    
    s.push(1); s.push(9); s.push(8); s.push(4);
    cout << " stack is:" << endl;
  /*  while(!s.empty())  {
        cout << s.top() << endl;
        s.pop();
    } */
    while(!s.empty()) {
       // cout << "top of the stack is :" << s.top() << endl;
        //int i = s.top();
       // cout << "top of the stack is :" << i << endl;
        rs.push(s.top());
        cout << "pop of the stack is rs :" << rs.top() << endl;
        s.pop();
    }
    cout << "reversed stack is:" << endl;
    while(!rs.empty())  {
        cout << rs.top() << endl;
        rs.pop();
    }
     return 0;
}