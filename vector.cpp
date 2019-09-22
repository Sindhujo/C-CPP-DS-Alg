#include <iostream>
#include <vector>
using namespace std;

int main() {

    std::vector <int> v;
    std::vector <int> :: iterator it;
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(10);
cout << "vector looks like v[2]:" <<  endl;
    for(int n : v){
        cout << n << endl;
    }

    it = v.begin();
    it = v.insert(it,5);
    it = v.insert(it+2, 25);
cout << "vector ater insert" << endl;
    for(int n : v){
        cout << n << endl;
    }
    std::vector <std::string> vs;
    std::vector <std::string>:: iterator its;
    vs.push_back("sindhu");
    vs.push_back("is");
    vs.push_back("good");
    vs.push_back("girl");
cout << "string vector looks like v[2]:" << endl;
    for(std::string n : vs){
        cout << n << " " ;
    }
    cout << endl;

    its = vs.begin();
its = vs.insert(its+2, std::string("a"));
    
    cout << "string vector after insert:" << endl;
    for(std::string n : vs){
        cout << n << " ";
    }


    cout << "vector looks like v[2]:" << v[2] << endl;
    for(int n : v){
        cout << n << endl;
    }
    v.pop_back();
    for(int n : v){
        cout << n << endl;
    }
   // v.front(31);
    //v.front(25);
    cout << "vector size:" << v.size() << endl;
    cout << "vector looks like v[1]:" << v[0] << endl;
     cout << "vector looks like v[1]:" << v[1] << endl;
      cout << "vector looks like v[1]:" << v[2] << endl;
      // cout << "vector looks like v[1]:" << v.at(3) << endl;
        //cout << "vector looks like v[1]:" << v[4] << endl;
        v.pop_back();
    cout << "vector front:" << v.front() << endl;
    cout << "vector back:" << v.back() << endl;
    
    
    
      
        //v.insert(0,15);

    //cout << "vector looks like v[3]:" << v[3] << endl;
}