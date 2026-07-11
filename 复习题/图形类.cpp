//
// Created by whip on 2026/7/11.
//
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

class rectangle:public figure{
public:
    rectangle(double _width,double _height):figure(_width,_height){}
    double area(){
        return width*height;
    }
    void display(){
        cout<<"I am a rectangle. The value of width is "<<width<<", the height is "<<height;
    }
};
class triangle:public figure{
public:
    triangle(double _width,double _height):figure(_width,_height){}
    double area(){
        return width*height/2;
    }
    void display(){
        cout<<"I am a triangle. The value of width is "<<width<<", the height is "<<height;
    }
};
int main()
{
    double width,height;
    cin>>width>>height;
    triangle tri(width,height);
    rectangle rect(width,height);
    tri.display();
    cout<<". The area is "<<tri.area()<<endl;
    rect.display();
    cout<<". The area is "<<rect.area()<<endl;
    return 0;
}