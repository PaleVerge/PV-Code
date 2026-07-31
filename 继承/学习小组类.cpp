//
// Created by ritno on 2026/5/26.
//
#include <iostream>
#include <iomanip>
using namespace std;

class student{
public:
    string name;
    int age;
    int score;
public:
    student():name(""),age(0),score(0){
    }
    student(string _name,int _age,int _score):name(_name),age(_age),score(_score){}
};
class team:public student{
protected:
    student s[3];
public:
    team(){
        for (int i=0;i<3;++i){
            cin>>s[i].name>>s[i].age>>s[i].score;
        }
    }
    void display(){
        for (int i=0;i<3;++i){
            cout<<s[i].name<<' '<<s[i].age<<' '<<s[i].score<<endl;
        }
    }
    double average(){
        double tot=0;
        for (int i=0;i<3;++i){
            tot+=s[i].score;
        }
        return (tot/3.0);
    }
    void top(){
        student tmp(s[0].name,s[0].age,s[0].score);
        for (int i=1;i<3;++i){
            if (tmp.score<s[i].score){
                tmp.score=s[i].score;
                tmp.age=s[i].age;
                tmp.name=s[i].name;
            }
        }
        cout<<tmp.name<<' '<<tmp.age<<' '<<tmp.score<<endl;
    }
};
int main()
{
    team t1;
    cout << "Team information:" << endl;
    t1.display();
    cout << "Top student information:" << endl;
    t1.top();
    cout << "Average score:" << endl;
    cout << fixed << setprecision(2);
    float avg = t1.average();
    cout << avg << endl;
    return 0;
}