#include <iostream>
#include <vector>
#include "game.h"
#include "stack.h"
//#include "cube.h"


game::game() {
    for(int i=0;i<3;i++) {
        stack stackofcubes;
        stacks_.push_back(stackofcubes);
    }

/*
int numberofcubes;
cin >> numberofcubes;
for(i=0;i<numberofcubes;i++){

}*/
cube c8(8);
stacks_[0].push_back(c8);

cube c7(7);
stacks_[0].push_back(c7);

cube c6(6);
stacks_[0].push_back(c6);

cube c5(5);
stacks_[0].push_back(c5);

cube c4(4);
stacks_[0].push_back(c4);

cube c3(3);
stacks_[0].push_back(c3);

cube c2(2);
stacks_[0].push_back(c2);

cube c1(1);
stacks_[0].push_back(c1);

}
void game::solve() {
cout << "solving" << endl ;
unsigned n = stacks_[0].size();
cout << "number of cubes: " << n << endl;
//for(int i=0;i<((2^n)-1);i++) {

while(!((stacks_[0].size()==0) && (stacks_[1].size()==0))) {
    cout << "in while" << endl;
    if(((stacks_[0].peek_top()).getLength()==0) && ((stacks_[1].peek_top()).getLength()==0)) {
                        break;
            }
    if(n%2==0){
     //   if((!stacks_[0].size())==0){       
            if(((stacks_[1].size())==0) or ((stacks_[1].peek_top()).getLength() > (stacks_[0].peek_top()).getLength())) {
                if((!stacks_[0].size())==0){
                    stacks_[1].push_back(stacks_[0].peek_top());
                    stacks_[0].remove_top();
                    cout << "pushing from S0 --> S1 for iteration :" << endl ;
                    if(((stacks_[0].peek_top()).getLength()==0) && ((stacks_[1].peek_top()).getLength()==0)) {
                      break;
                    }
                }
                else {
                    stacks_[0].push_back(stacks_[1].peek_top());
                    stacks_[1].remove_top();
                    cout << "pushing from S1 --> S0 from iteration :" << endl;
                    if(((stacks_[0].peek_top()).getLength()==0) && ((stacks_[1].peek_top()).getLength()==0)) {
                        break;
                    }
                }
            }
            else {
                stacks_[0].push_back(stacks_[1].peek_top());
                stacks_[1].remove_top();
                cout << "pushing from S1 --> S0 from iteration :" << endl;
                if(((stacks_[0].peek_top()).getLength()==0) && ((stacks_[1].peek_top()).getLength()==0)) {
                    break;
                }
            }
            

            if((stacks_[2].size())==0 or ((stacks_[2].peek_top()).getLength() > (stacks_[0].peek_top()).getLength())) {
                if((!stacks_[0].size())==0){
                    stacks_[2].push_back(stacks_[0].peek_top());
                    stacks_[0].remove_top();
                    cout << "pushing from S0 --> S2 from iteration :" << endl;
                    if(((stacks_[0].peek_top()).getLength()==0) && ((stacks_[1].peek_top()).getLength()==0)) {
                        break;
                    }
                }
                else {
                    stacks_[0].push_back(stacks_[2].peek_top());
                    stacks_[2].remove_top();
                    cout << "pushing from S2 --> S0 from iteration :" << endl;
                    if(((stacks_[0].peek_top()).getLength()==0) && ((stacks_[1].peek_top()).getLength()==0)) {
                        break;
                    }
                }
            }
            else {
                stacks_[0].push_back(stacks_[2].peek_top());
                stacks_[2].remove_top();
                cout << "pushing from S2 --> S0 from iteration :" << endl;
                if(((stacks_[0].peek_top()).getLength()==0) && ((stacks_[1].peek_top()).getLength()==0)) {
                    break;
                }
            }
            if(((stacks_[2].peek_top()).getLength() > (stacks_[1].peek_top()).getLength())) {
                stacks_[2].push_back(stacks_[1].peek_top());
                stacks_[1].remove_top();
                cout << "pushing from S1 --> S2 from iteration :" << endl;
                if(((stacks_[0].peek_top()).getLength()==0) && ((stacks_[1].peek_top()).getLength()==0)) {
                    break;
                }
            }
            else {
                stacks_[1].push_back(stacks_[2].peek_top());
                stacks_[2].remove_top();
                cout << "pushing from S2 --> S1 from iteration :" << endl;
                if(((stacks_[0].peek_top()).getLength()==0) && ((stacks_[1].peek_top()).getLength()==0)) {
                break;
                }
            }
        if(((stacks_[0].peek_top()).getLength()==0) && ((stacks_[1].peek_top()).getLength()==0)) {
            break;
        }

       // }
    } 
       
    else {
        cout << "n is odd" << endl;
   
            if((stacks_[2].size())==0 or ((stacks_[2].peek_top()).getLength() > (stacks_[0].peek_top()).getLength())) {
                if((!stacks_[0].size())==0){
                    stacks_[2].push_back(stacks_[0].peek_top());
                    stacks_[0].remove_top();
                    cout << "pushing from S0 --> S2 from iteration :" << endl;
                    if(((stacks_[0].peek_top()).getLength()==0) && ((stacks_[1].peek_top()).getLength()==0)) {
                        break;
                    }
                }
             /*   else {
                    stacks_[0].push_back(stacks_[2].peek_top());
                    stacks_[2].remove_top();
                    cout << "pushing from S2 --> S0 from iteration :" << endl;
                    if(((stacks_[0].peek_top()).getLength()==0) && ((stacks_[1].peek_top()).getLength()==0)) {
                        break;
                    }
                }*/
            }
            else {
                if(stacks_[2].size()!=0){
                stacks_[0].push_back(stacks_[2].peek_top());
                stacks_[2].remove_top();
                cout << "pushing from S2 --> S0 from iteration :" << endl;
                }
                if(((stacks_[0].peek_top()).getLength()==0) && ((stacks_[1].peek_top()).getLength()==0)) {
                    break;
                }
            }
            if(((stacks_[0].peek_top()).getLength()==0) && ((stacks_[1].peek_top()).getLength()==0)) {
                        break;
            }
            
            if((stacks_[1].size())==0 or ((stacks_[1].peek_top()).getLength() > (stacks_[0].peek_top()).getLength())) {
                if(!(stacks_[0].size())==0){
                    stacks_[1].push_back(stacks_[0].peek_top());
                    stacks_[0].remove_top();
                    cout << "pushing from S0 --> S1 from iteration :" << endl;
                    if(((stacks_[0].peek_top()).getLength()==0) && ((stacks_[1].peek_top()).getLength()==0)) {
                        break;
                    }
                }
                else {
                    if(stacks_[1].size()!=0){
                    stacks_[0].push_back(stacks_[1].peek_top());
                    stacks_[1].remove_top();
                    cout << "pushing from S1 --> S0 from iteration :" << endl;
                    if(((stacks_[0].peek_top()).getLength()==0) && ((stacks_[1].peek_top()).getLength()==0)) {
                        break;
                    }
                    }
                }
            }
            else {
                if(stacks_[1].size()!=0){
                stacks_[0].push_back(stacks_[1].peek_top());
                stacks_[1].remove_top();
                cout << "pushing from S1 --> S0 from iteration :" << endl;
                }
                if(((stacks_[0].peek_top()).getLength()==0) && ((stacks_[1].peek_top()).getLength()==0)) {
                    break;
                }
            }
            if(((stacks_[0].peek_top()).getLength()==0) && ((stacks_[1].peek_top()).getLength()==0)) {
                        break;
            }

            if((stacks_[1].size() > 0) && ((stacks_[2].peek_top()).getLength() > (stacks_[1].peek_top()).getLength())) {
                if(stacks_[1].size() > 0) {
                stacks_[2].push_back(stacks_[1].peek_top());
                stacks_[1].remove_top();
                cout << "pushing from S1 --> S2 from iteration :" << endl;
                }
                
            }
            else {
                if(stacks_[2].size()!=0 && stacks_[2].size() < n) {
                stacks_[1].push_back(stacks_[2].peek_top());
                stacks_[2].remove_top();
                cout << "pushing from S2 --> S1 from iteration :" << endl;
                }
            }
        if(((stacks_[0].peek_top()).getLength()==0) && ((stacks_[1].peek_top()).getLength()==0)) {
            break;
        }
    }    
    
    
}

}

std::ostream& operator<<(std::ostream & os, const game & game) {
    for(unsigned i=0;i<game.stacks_.size();i++) {
        os << "stack[" << i << "];" << game.stacks_[i];
    }
    return os;
    
}
/*
c1 = stacks_[0].peek_top();
         c3 = stacks_[2].peek_top();
        if(c1.getLength() > c3.getLength()) {
            stacks_[2].push_back(c1);
            stacks_[0].remove_top();
        }
        else {
            stacks_[0].push_back(c3);
            stacks_[2].remove_top();
        }
    }
    else {
         c1 = stacks_[0].peek_top();
         c3 = stacks_[2].peek_top();
        if(c1.getLength() > c3.getLength()) {
            stacks_[2].push_back(c1);
            stacks_[0].remove_top();
        }
        else {
            stacks_[0].push_back(c3);
            stacks_[2].remove_top();
        }
         c1 = stacks_[0].peek_top();
         c2 = stacks_[1].peek_top();
        if(c1.getLength() > c2.getLength()) {
            stacks_[1].push_back(c1);
            stacks_[0].remove_top();
        }
        else {
            stacks_[0].push_back(c2);
            stacks_[1].remove_top();
        }
    }
         c2 = stacks_[1].peek_top();
         c3 = stacks_[2].peek_top();
        if(c2.getLength() > c3.getLength()) {
            stacks_[2].push_back(c2);
            stacks_[1].remove_top();
        }
        else {
            stacks_[1].push_back(c3);
            stacks_[2].remove_top();
        }
 */
