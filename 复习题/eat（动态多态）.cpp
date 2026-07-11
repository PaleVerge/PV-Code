//
// Created by whip on 2026/7/11.
//
#include <iostream>
using namespace std;
class Animal{
protected:
    string name;
public:
    Animal(string _name):name(_name){}
    virtual void eat(){}
};
class student:public Animal{
public:
    student(string _name):Animal(_name){};
    void eat(){
        cout<<"I am a student, my name is "<<name<<", I want to have lunch at mess hall!"<<endl;
    }
};

class teacher:public Animal{
public:
    teacher(string _name):Animal(_name){};
    void eat(){
        cout<<"I am a teacher, my name is "<<name<<", I want to eat potato in CHUANWEI restaurant!"<<endl;
    }
};

class boss:public Animal{
public:
    boss(string _name):Animal(_name){};
    void eat(){
        cout<<"I am a boss, my name is "<<name<<", I want to eat fish in GAODIJIE restaurant!"<<endl;
    }
};
int main()
{
    int choice;
    Animal *p = NULL;
    string nameValue;
    //cout<<"please input a number(1=student, 2=teacher, 3=boss) .";
    cin>>choice;
    // cout<<"please enter the name.";
    cin>>nameValue;
    if(choice==1)
        p=new student(nameValue);
    else
        if(choice==2)
            p=new teacher(nameValue);
        else
            if(choice==3)
                p=new boss(nameValue);
    p->eat();
    if(p!=NULL) delete p;
    return 0;
}