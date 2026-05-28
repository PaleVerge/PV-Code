#include <iostream>
#include <string>
using namespace std;

class person{
public:
	person(string _pName) :pName(_pName){};
	virtual void eat()=0;
protected:
	string pName;
};

class student :public person{
public:
	student(string stuName)
		:person(stuName){}
	void eat(){
		cout << "I am a student, my name is  " << pName <<  ". I want to have lunch in the 8th  mess hall!"<<endl;
	}
};


class teacher :public person{
public:
	teacher(string teaName)
		:person(teaName){}
	void eat(){
		cout << "I am a teacher, my name is " << pName << ", I want to eat at home!" << endl;
	}
};
int main(){
	cout<<"Please chose a person (1:student 2:teacher) :"<<endl;
	char option;cin>>option;
	person * p;
	cout<<"Please input you name :"<<endl;
	string name;cin>>name;
	if(option=='1'){
		p=new student(name);
		p->eat();
	}else if(option=='2'){
		p=new teacher(name);
		p->eat();
	}else{
		cout<<"Invaid Option! Please Input Again."<<endl;
	}
	return 0;
}
