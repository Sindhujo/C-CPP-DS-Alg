#include <iostream>
#include <vector>
#include "cube.h"
#pragma once
class stack {
    public:
    stack();
        //cube(double length);
        void push_back(const cube & cube);
        cube remove_top();
        cube & peek_top();
        unsigned size() const;
    
    friend std::ostream& operator<<(std::ostream & os, const stack & stack);
    private:

    std::vector<cube> cubes_;
};