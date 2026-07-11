//
// Created by whip on 2026/7/11.
//
#include <iostream>
using namespace std;

class goods{
protected:
    string name;
    int id;
public:
    goods(int _id,string _name){
        id=_id;
        name=_name;
    }
    void display(){
        cout<<"goodsID="<<id<<" goodsName="<<name;
    }
};

class foods:public goods{
private:
    int days;
public:
    foods(int _id,string _name,int _days):goods(_id,_name),days(_days){}

    void display(){
        cout<<"goodsID="<<id<<" goodsName="<<name<<" days="<<days;
    }

};

int main()
{
    int ID;
    string name;
    int days;

    cin>>ID>>name;

    class goods goods1(ID,name);
    goods1.display();
    cout<<endl;
    cin>>ID>>name>>days;
    class foods foods1(ID,name,days);
    foods1.display();
    cout<<endl;

    return 0;
}