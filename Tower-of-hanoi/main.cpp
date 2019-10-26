#include <iostream>
#include "game.h"
using namespace std;

int main() {
    game g;
    
    cout << "game before start:" << endl;
    cout << g << endl;

    g.solve();

    cout << "game after start:" << endl;
    cout << g << endl;

    return 0;
}