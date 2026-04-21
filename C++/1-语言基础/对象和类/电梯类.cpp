//
// Created by ritno on 2026/4/21.
//
//
// Created by ritno on 2026/4/21.
//
#include <iostream>
#include <iomanip>
using namespace std;
class lift{
private:
    static int floor;
public:
    lift(){
    }
    void up(){
        if (floor<10){
            floor++;
            display();
        }
    }
    void down(){
        if (floor>1){
            floor--;
            display();
        }
    }
    void rt(){
        while (floor!=1){
            floor--;
            display();
        }
    }
    void display(){
        cout<<"current floor:"<<floor<<endl;
    }
};
int lift::floor=1;
int main(){
    char c;
    lift t;
    while (cin>>c){
        if (c=='S'){
            t.rt();
            break;
        }else if (c=='+'){
            t.up();
        }else if (c=='-'){
            t.down();
        }
    }
    return 0;
}