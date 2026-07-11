//
// Created by whip on 2026/7/11.
//
#include <iostream>

using namespace std;
class student{
private:
    string stuNum;
    string stuName;
    int math,eng,prog,tot;
public:
    student(string _stuNum,string _stuName){
        stuName=_stuName;
        stuNum=_stuNum;
        math=0,eng=0,prog=0,tot=0;
    }
    student(string _stuNum,string _stuName,int _math,int _eng,int _prog){
        stuName=_stuName;
        stuNum=_stuNum;
        math=_math,eng=_eng,prog=_prog,tot=0;
    }
    int sumfun(){
        tot=math+prog+eng;
        return tot;
    }
    void inputscore(){
        cin>>math>>eng>>prog;
    }
    void display(){
        cout<<stuNum<<' '<<stuName<<' '<<math<<' '<<eng<<' '<<prog<<' '<<tot<<endl;
    }



};
int main(){
    student st1("111", "John"), st2("222","Mike",67,89,92);
    st1.inputscore();
    st1.sumfun();
    st2.sumfun();
    st1.display();
    st2.display();
    return 0;
}