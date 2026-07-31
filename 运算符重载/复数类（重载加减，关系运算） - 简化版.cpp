//
// Created by ritno on 2026/5/11.
//
#include <iostream>
#include <iomanip>
using namespace std;
class complex{
private:
    double real;
    double imag;
    double mod(double _real,double _imag){
        return _real*_real+_imag*_imag;
    }
public:
    void input(){
        char pos,i;
        cin>>real>>pos>>imag>>i;
        if (pos=='-'){
            imag=-imag;
        }
    }
    void display(){
        if (imag==0)cout<<fixed<<setprecision(2)<<0<<endl;
        else{
            cout<<fixed<<setprecision(2)<<real<<showpos<<imag<<'i'<<endl;
        }
    }
    complex operator+(complex c){
        complex tmp;
        tmp.real=real+c.real;
        tmp.imag=imag+c.imag;
        return tmp;
    }
    complex operator-(complex c){
        complex tmp;
        tmp.real=real-c.real;
        tmp.imag=imag-c.imag;
        return tmp;
    }
    bool operator>(complex c){
        if (mod(real,imag)>mod(c.real,c.imag)){
            return true;
        }
        return false;
    }
    bool operator<(complex c){
        if (mod(real,imag)<mod(c.real,c.imag)){
            return true;
        }
        return false;
    }
    bool operator==(complex c){
        return (real==c.real&&imag==c.imag)?true:false;
    }
    bool operator!=(complex c){
        return ((*this)==c)?false:true;
    }

};
int main()
{
    complex c1, c2, c3, c4, c5 ;
    c1.input();
    c2.input();
    c3 = c1 + c2 ;
    c4 = c1 - c2 ;
    if ( c3 != c4 ){
        if (c3 < c4){
            cout << "c3 is less than c4" ;
            c5 = c4 - c3 ;
        }
        if ( c3 > c4 ){
            cout << "c3 is greater than c4" ;
            c5 = c3 - c4 ;
        }
    }
    if ( c3 == c4 ){
        cout << "c3 and c4 are equal";
        c5 = c4 ;
    }
    cout<<endl;
    c5.display();
    return 0;
}