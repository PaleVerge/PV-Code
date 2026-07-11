//
// Created by whip on 2026/7/11.
//
#include<iostream>
using namespace std;
class student{
private:
    string num;
    string name;
    int score;
public:
    student(){
        score=0;
        num="";
        name="";
    }
    void input(){
        cin>>num>>name>>score;
    }
    void display(){
        cout<<num<<' '<<name<<' '<<score<<endl;
    }
};
int main(){
    int n;
    cin>>n;
    student* p=new student[n];
    for (int i=0;i<n;i++){
        p[i].input();
    }
    for (int i=0;i<n;i++){
       p[i].display();
    }
    return 0;
}