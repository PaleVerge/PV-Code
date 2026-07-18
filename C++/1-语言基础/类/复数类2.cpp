//
// Created by whip on 2026/7/11.
//
#include <iostream>
#include <iomanip>
using namespace std;
class com{
    double real,imag;
public:
    com(){
        real=1.0,imag=1.0;
    }
    com(double _real,double _imag){
        real=_real;
        imag=_imag;
    }
    void setReal(double _real){
        real=_real;
    }
    void setImag(double _imag){
        imag=_imag;
    }
    double getReal(){
        return real;
    }
    double getImag(){
        return imag;
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
    bool operator!=(com t){
        if (real!=t.real || imag!=t.imag)
            return true;
        return false;
    }
    bool operator==(com t){
       if (real==t.real&& imag==t.imag)
           return true;
       return false;
    }
    bool operator>(com t){
       if (real*real+imag*imag>t.real*t.real+t.imag*t.imag)
           return true;
       return false;
    }
    bool operator<(com t){
        if (real*real+imag*imag<t.real*t.real+t.imag*t.imag)return true;
        return false;
    }

};
ostream& operator<<(ostream& os,com& t){
    double real=t.getReal();
    double imag=t.getImag();

    if (real==0 && imag==0)
        os<<0<<endl;
    else if (real==0)
        os<<fixed<<setprecision(2)<<imag<<'i'<<endl;
    else if (imag==0)
        os<<fixed<<setprecision(2)<<real<<endl;
    else
        os<<fixed<<setprecision(2)<<noshowpos<<real<<showpos<<imag<<'i'<<endl;
    return os;
}

istream& operator>>(istream& is,com& t){
    double real,imag;
    char c1,c2;
    is>>real>>c1>>imag>>c2;
    if (c1=='-')imag=-imag;
    t.setReal(real);
    t.setImag(imag);
    return is;
}
int main()
{
    com c1, c2, c3, c4, c5 ;
    cin >> c1 >> c2 ;
    c3 = c1 + c2 ;
    c4 = c1 - c2 ;
    if ( c3 != c4 )
    {
        if (c3 < c4)
        {
            cout << "c3 is less than c4" ;
            c5 = c4 - c3 ;
        }
        if ( c3 > c4 )
        {
            cout << "c3 is greater than c4" ;
            c5 = c3 - c4 ;
        }
    }
    if ( c3 == c4 )
    {
        cout << "c3 and c4 are equal";
        c5 = c4 ;
    }
    cout<<endl;
    cout << c5 ;
    return 0;
}