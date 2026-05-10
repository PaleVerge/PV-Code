//
// Created by ritno on 2026/5/8.
//
#include <iostream>

using namespace std;
class stu{
private:
    string num;
    string id;
    int score;
public:
    void input(){
        cin>>num>>id>>score;
    }
    void display(){
        cout<<num<<' '<<id<<' '<<score<<endl;
    }
};
int main(){
    int n;cin>>n;
    stu * p = new stu[n];
    for (int i=0;i<n;++i){
        p[i].input();
        p[i].display();
    }
    delete []p;
    return 0;
}