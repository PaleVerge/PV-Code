//
// Created by whip on 2026/6/1.
//
#include <iostream>
#include <string>
using namespace std;
class Animal{
protected:
    string name;
public:
    Animal(string _name):name(_name){}
    virtual void cry(){}
    virtual ~Animal(){}
};
class Cat:public Animal{
public:
    Cat(string _name):Animal(_name){}
    void cry(){
        cout<<"I am a cat, my name is "<<name<<", miaomiao."<<endl;
    }
};
class Dog:public Animal{
public:
    Dog(string _name):Animal(_name){}
    void cry(){
        cout<<"I am a dog, my name is "<<name<<", wangwang."<<endl;
    }
};
class Mouse:public Animal{
public:
    Mouse(string _name):Animal(_name){}
    void cry(){
        cout<<"I am a mouse, my name is "<<name<<", zhizhi."<<endl;
    }
};
int main(){
    Animal *p;
    string name;
    cin >> name;
    Mouse m1(name);

    cin >> name;
    Cat c1(name);

    cin >> name;
    Dog d1(name);

    p = &m1;
    p->cry();

    p = &c1;
    p->cry();

    p = &d1;
    p->cry();
    return 0;
}