//
// Created by ritno on 2026/4/21.
//
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class complex{
private:
    double real;
    double imag;
public:
    complex(double _real=1.0,double _imag=1.0){
        real=_real;
        imag=_imag;
    }
    void display(){
        if (imag){
            cout<<fixed<<setprecision(2)<<noshowpos<<real<<showpos<<imag<<'i';
        }else{
            cout<<fixed<<setprecision(2)<<noshowpos<<real;
        }

    }
    void input(){
        double _real,_imag;
        cin>>_real>>_imag;
        real=_real;
        imag=_imag;
    }
    double magnitude(){
        return sqrt(real*real+imag*imag);
    }
};
int main(){
    complex val1,val2,val3(1.5,2.8);
    val1.input();
    val1.display();
    cout<<"  "<<noshowpos<<fixed<<setprecision(2)<<val1.magnitude()<<endl;
    val2.display();
    cout<<"  "<<noshowpos<<val2.magnitude()<<endl;
    val3.display();
    cout<<"  "<<noshowpos<<val3.magnitude()<<endl;
    return 0;
}