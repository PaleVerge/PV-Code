#include <iostream>
using namespace std;
class goods{
	protected:
		int id;
		string name;
		static int next=0;
	public:
		goods(){
			id=next++:
		}
		void display(){
			cout<<"goodsID="<<id<<' '<<"goodsName="<<name<<endl;
		}
};
class foods:public goods{
	private:
		int days;
	public:
		foods(){
			
		}
		void display(){
			cout<<"goodsID="<<id<<' '<<"goodsName="<<name<<<<<<endl;
		}
};
int main()
{
 class goods goods1;
 goods1.display();
 cout<<endl;
 class foods foods1;
 foods1.display();
 cout<<endl;
 return 0;
}
