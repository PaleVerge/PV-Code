//
// Created by whip on 2026/7/11.
//
#include <iostream>
#include <iomanip>
using namespace std;
class com{
private:
    double real,imag;
public:
    com(){
        real=1.0,imag=1.0;
    }
    com(double _real,double _imag){
        real=_real;
        imag=_imag;
    }
    com operator+(com t){
        com tmp;
        tmp.real=real+t.real;
        tmp.imag=imag+t.imag;
        return tmp;
    }
    com operator-(com t){
        com tmp;
        tmp.real=real-t.real;
        tmp.imag=imag-t.imag;
        return tmp;
    }

    void display(){
        if (real==0 && imag==0)
            cout<<0<<endl;
        else if (real==0)
            cout<<fixed<<setprecision(2)<<imag<<'i'<<endl;
        else if (imag==0)
            cout<<fixed<<setprecision(2)<<real<<endl;
        else
            cout<<fixed<<setprecision(2)<<noshowpos<<real<<showpos<<imag<<'i'<<endl;
    }
};
int main(){

    int r1,r2,i1,i2;
    cin>>r1>>i1>>r2>>i2;
    com c1(r1,i1),c2(r2,i2);
    (c1+c2).display();
    (c1-c2).display();
    return 0;
}