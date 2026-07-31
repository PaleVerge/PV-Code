//
// Created by whip on 2026/6/1.
//
#include <iostream>
#include <iomanip>
using namespace std;

class circle{
protected:
    double r;
public:
    circle(){
        cin>>r;
    }
    ~circle(){}

    virtual double area(){
        return 3.14*r*r;
    }
    void area_message(string s){
        cout<<s<<fixed<<setprecision(2)<<area()<<endl;
    }
};
class sphere:public circle{
public:
    sphere():circle(){}
    double area(){
        return 4*3.14*r*r;
    }
};

int main(){
    circle *p;
    circle c;
    p = &c;
    p->area_message("The area of circle is ");

    sphere s;
    p = &s;
    p->area_message("The area of sphere is ");

    return 0;
}