//
// Created by whip on 2026/7/11.
//
#include <iostream>
using namespace std;
class square{
protected:
    double size;
public:
    square(double _size):size(_size){}
    double area(){
        return size*size;
    }
};
class cube:public square{
public:
    cube(int _size):square(_size){};
    double area(){
        return 6*size*size;
    }
    double volume(){
        return size*size*size;
    }
};

int main(){
    double a, b;

    cin >> a >> b;

    square s(a);
    cube c(b);

    cout << s.area() << endl;
    cout << c.area() << endl;
    cout << c.volume() << endl;
}

