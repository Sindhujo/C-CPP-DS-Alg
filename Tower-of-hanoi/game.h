#pragma once
#include <iostream>
#include <vector>
#include "stack.h"

using namespace std;

class game{
    public:
        game();
        void solve();
    
    friend std::ostream & operator<<(std::ostream & os, const game & game);
    private:
        std::vector <stack> stacks_;

};