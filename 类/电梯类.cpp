//
// Created by whip on 2026/7/11.
//
#include <iostream>
using namespace std;

class lift{
private:
    int curr_floor;
public:
    lift(int floor=1):curr_floor(floor){}
    void up(){
        if (curr_floor==10) return ;
        curr_floor++;
        cout<<"current floor:"<<curr_floor<<endl;
    }
    void down(){
        if (curr_floor==1) return ;
        curr_floor--;
        cout<<"current floor:"<<curr_floor<<endl;
    }
    void to(int x){
        if (x>curr_floor){
            for (int i=0;i<x-curr_floor;i++){
                up();
            }
        }
        if (x<curr_floor){
            for (int i=0;i<curr_floor-x;i++){
                down();
            }
        }
    }
    void S(){
        for (int i=curr_floor;i>0;i--){
            down();
        }
    }

};

int main(){
    char option;
    lift t1;
    while (cin>>option){
        if (option=='S'){
            t1.S();
            break;
        }
        if (option=='+'){
            t1.up();

        }else if (option=='-'){
            t1.down();
        }
    }

    return 0;
}