//
// Created by ritno on 2026/4/21.
//
#include <iostream>
#include <iomanip>
using namespace std;
class student{
private:
    static int count;
    int id;
    int age;
    string name;
public:
    student(){
        count++;
        id=count;
        cin>>name>>age;
    }
    void display(){
        cout<<id<<' '<<name<<' '<<age<<endl;
    }
    int getage(){
        return age;
    }
};
int student::count=0;
int main(){
    student s[5];
    float avg=0.0;
    double tot=0;
    for (int i=0;i<5;++i){
        s[i].display();
        tot+=s[i].getage();
    }
    avg=tot/5.0;
    cout<<fixed<<setprecision(2)<<avg;

    return 0;
}