#include <iostream>

using namespace std;
class person{
	private:
		string name;
	public:
		person(string pname){
			name=pname;			
		}
		void eat(){
			cout<<"I am a person "<<name<<", I wanna to eat a table."<<endl;
		}
};
class student{
	private:
		string name;
	public:
		student(string pname){
			name=pname;			
		}
		void eat(){
			cout<<"I am a student "<<name<<", I wanna to eat a monkey."<<endl;
		}
};
class teacher{
	private:
		string name;
	public:
		teacher(string pname){
			name=pname;			
		}
		void eat(){
			cout<<"I am a teacher "<<name<<", I wanna to eat a elephant."<<endl;
		}
};
int main(){
	student s1("Íõ²ß");
	person p1("ËïºëÒã"); 
	teacher t1("Ëï²ß");
	s1.eat();
	p1.eat();
	t1.eat();
	
	return 0;
}
