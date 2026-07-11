//
// Created by whip on 2026/7/11.
//
#include <iostream>
using namespace std;
class Worker{
protected:
    string name;
    string address;
    int salary;
public:
    Worker(string _name,string _address):
    name(_name),address(_address){}
    virtual void printInfo(){}
};

class AWorker:public Worker{
private:
    int fixed;
public:
    AWorker(string _name,string _address,int _fixed)
        :Worker(_name,_address),fixed(_fixed){
        salary=fixed;
    }
    void printInfo(){
        cout<<
            "class Aworker: name: "<<name<<", address: "<<address<<", salary: "<<salary<<endl;
    }
};

class BWorker:public Worker{
private:
    int num;
    int single;
public:
    BWorker(string _name,string _address,int _num,int _single)
    :Worker(_name,_address),num(_num),single(_single){
        salary=num*single;
    }
    void printInfo(){
        cout<<
            "class Bworker: name: "<<name<<", address: "<<address<<", salary: "<<salary<<endl;
    }
};

class CWorker:public Worker{
private:
    int hour;
    int single;
public:
    CWorker(string _name,string _address,int _hour,int _single)
    :Worker(_name,_address),hour(_hour),single(_single){
        salary=hour*single;
    }
    void printInfo(){
        cout<<
            "class Cworker: name: "<<name<<", address: "<<address<<", salary: "<<salary<<endl;
    }
};

int main()
{
    Worker* w = NULL; //基类指针

    w = new AWorker("zhang", "A address", 2000);
    w->printInfo();
    delete w;


    w = new BWorker("wang", "B address", 100,  15);
    w->printInfo();
    delete w;
    //基类指针指向计时工人
    //li为姓名,C address是地址,80是一月工作的小时数,30是一小时的薪酬,工资为80*30=2400
    w = new CWorker("li", "C address", 80, 30);
    w->printInfo();
    delete w;
    return 0;
}