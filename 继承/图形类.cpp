//
// Created by ritno on 2026/5/15.
//
#include <iomanip>
#include <iostream>
using namespace std;
class figure{
protected:
    double height,width;
public:
    figure(double _width,double _height){
        height=_height;
        width=_width;
    }
};

class triangle :public figure{
public:
    triangle(double _width,double _height):figure(_width,_height){}
    double area(){
        return (height*width/2);
    }
    void display(){
        cout<<fixed<<setprecision(0)<<"I am a trtangle. The value of width is "<<width<<", the height is "<<height<<'.';
    }
};
class rectangle :public figure{
public:
    rectangle(double _width,double _height):figure(_width,_height){}
    double area(){
        return (height*width);
    }
    void display(){
        cout<<fixed<<setprecision(0)<<"I am a rectangle. The value of width is "<<width<<", the height is "<<height<<'.';
    }
};
int main()
{
    double width,height;
    cin>>width>>height;
    triangle tri(width,height);
    rectangle rect(width,height);
    tri.display();
    cout<<"The area is "<<tri.area()<<endl;
    rect.display();
    cout<<"The area is "<<rect.area()<<endl;
    return 0;
}