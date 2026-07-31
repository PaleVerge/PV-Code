//
// Created by whip on 2026/7/11.
//
#include <iostream>
using namespace std;
class vehicle{
protected:
    string id;
    int l;
public:
    vehicle(){
        cin>>id>>l;
    }
    void display(){
        cout<<"id="<<id<<' '<<"dr="<<l<<"km";
    }
};
class bike:public vehicle{
private:
    string brand;
public:
    bike(){
        cin>>brand;
    }
    void display(){
        cout<<"id="<<id<<' '<<"dr="<<l<<"km"<<' '<<"brand="<<brand;
    }
};
int main()
{
    class vehicle vehicle1;
    vehicle1.display();
    cout << endl;
    class bike bike1;
    bike1.display();
    cout << endl;
    return 0;
}