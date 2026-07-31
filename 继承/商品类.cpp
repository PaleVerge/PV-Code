#include <iostream>
using namespace std;
class goods{
	protected:
		int id;
		string name;
	public:
		goods(){
			cin>>id>>name;
		}
		void display(){
			cout<<"goodsID="<<id<<' '<<"goodsName="<<name;
		}
};
class foods:public goods{
	private:
		int days;
	public:
		foods():goods(){
			cin>>days;
		}
		void display(){
			cout<<"goodsID="<<id<<' '<<"goodsName="<<name<<' '<<"days="<<days;
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
