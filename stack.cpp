#include <iostream>
#include <vector>
#include "stack.h"
using namespace std;

stack::stack() {}

void stack::push_back(const cube & cube) {
    cubes_.push_back(cube);
} 
cube stack::remove_top() {
    if(!cubes_.empty())
    cubes_.pop_back();
}

cube & stack::peek_top() {
    //if(!cubes_.empty()) return nullptr;
    //else 
   // cout << "in peek_top function:" << endl;
    //cout << "printing cubs:" << & cubes_[cubes_.size()-1] << endl;
    return cubes_[cubes_.size()-1]; 
}
unsigned stack::size() const{
    return cubes_.size();
}

std::ostream & operator<<(std::ostream &os, const stack & stack) {
    for(unsigned i=0;i<stack.cubes_.size();i++) {
        os << stack.cubes_[i].getLength();
    }
    //return 0;
}
