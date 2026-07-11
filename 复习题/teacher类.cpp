//
// Created by whip on 2026/7/11.
//
//
// Created by whip on 2026/7/11.
//
#include <iostream>

using namespace std;
class teacher{
private:
    string stuNum;
    string stuName;
    double base_pay,allowance,insurance;
    double tot,real;
public:
    teacher(string _stuNum,string _stuName){
        stuName=_stuName;
        stuNum=_stuNum;
        base_pay,allowance,insurance,tot,real=0;
    }
    teacher(string _stuNum,string _stuName,double _base_pay,double _allowance,double _insurance){
        stuName=_stuName;
        stuNum=_stuNum;
        base_pay=_base_pay,allowance=_allowance,insurance=_insurance;
        tot=0,real=0;
    }
    void salary(){
        tot=base_pay+allowance;
        real=tot-insurance;
    }
    void input(){
        cin>>base_pay>>allowance>>insurance;
    }
    void display(){
        cout<<stuNum<<' '<<stuName<<' '<<base_pay<<' '<<allowance<<' '<<insurance<<' '<<tot<<' '<<real<<endl;
    }



};
int main(){
    teacher st1("111", "Mary"),st2("222","Alex",4256.78,1234.56, 895.17);
    st1.input();
    st1.salary();
    st2.salary();
    st1.display();
    st2.display();
    return 0;
}