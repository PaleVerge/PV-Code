//
// Created by ritno on 2026/4/21.
//
#include <iostream>
#include <iomanip>
using namespace std;
class teacher{
private:
    string jobNo;
    string name;
    double base_pay;
    double allowance;
    double insurance;
    double total_pay;
    double real_pay;
public:
    teacher(string _jobNo,string _name,double _base_pay=0,double _allowance=0,double _insurance=0){
        name=_name;
        jobNo=_jobNo;
        base_pay=_base_pay;
        allowance=_allowance;
        insurance=_insurance;
    }
    void input(double _base_pay,double _allowance,double _insurance){
        base_pay=_base_pay;
        allowance=_allowance;
        insurance=_insurance;
    }
    void display(){
        cout<<fixed<<setprecision(2)<<jobNo<<' '<<name<<' '<<base_pay<<' '<<allowance<<' '<<insurance<<' '<<total_pay<<' '<<real_pay<<'\n';
    }
    void salary(){
        total_pay=base_pay+allowance;
        real_pay=total_pay-insurance;
    }
};
int main(){
    teacher t1("111","Mary"),t2("222","Alex",
    4256.78,1234.56,895.17);
    double _basepay,_allowance,_insurance;
    cin>>_basepay>>_allowance>>_insurance;
    t1.input(_basepay,_allowance,_insurance);

    t1.salary();
    t2.salary();

    t1.display();
    t2.display();
    return 0;
}
