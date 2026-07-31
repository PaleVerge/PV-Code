//
// Created by whip on 2026/7/11.
//
#include <iostream>
using namespace std;
class worker{
protected:
    string name;
    string id;
public:
    worker(string _id,string _name):
    id(_id),name(_name){}
};

class teacher:virtual public worker{
protected:
    string title,sp;
public:
    teacher(string _id,string _name,string _title,string _sp)
        :worker(_id,_name),title(_title),sp(_sp){}
    void display(){
        cout<<
            "I am a teacher, my name is "<<name<<", title is "<<title<<", speciality is "<<sp<<"."<<endl;
    }
};

class staff:virtual public worker{
protected:
    string pop;
public:
    staff(string _id,string _name,string _pop)
    :worker(_id,_name),pop(_pop){}
    void display(){
        cout<<
            "I am a staff, my name is "<<name<<", position is "<<pop<<"."<<endl;
    }
};

class leader:public teacher,staff{
private:
    int num;
public:
    leader(string _id,string _name,string _title,string _sp,string _pop,int _num)
    :worker(_id,_name),teacher(_id,_name,_title,_sp),staff(_id,_name,_pop),num(_num)
    {}
   void display(){
        cout<<"I am a leader, my name is "<<name<<", title is "<<title<<", speciality is "<<sp<<", my position is "<<pop<<" and there are "<<num<<" worker in my department."<<endl;
    }
};

int main()
{
    teacher t1("001","zhangling","instructor","computer");
    staff s1("002","wangping","office");
    leader l1("003","lisan","professor","computer","headmaster",2000);
    t1.display();
    s1.display();
    l1.display();
    return 0;
}