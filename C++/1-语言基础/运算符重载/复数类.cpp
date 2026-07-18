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
    //求复数模的大小
    double mod(double _real,double _imag){
        return _real*_real+_imag*_imag;
    }
public:
    //使用友元重载流式运算符
    friend istream& operator>>(istream& is,complex &m){
        char pos,i;
        cin>>m.real>>pos>>m.imag>>i;
        if (pos=='-') m.imag=-m.imag;
        return is;
    }
    //使用友元重载流式运算符
    friend ostream& operator<<(ostream& os,complex &m){
        if (m.imag==0)
            os<<fixed<<setprecision(2)<<m.real<<endl;
        else
            os<<fixed<<setprecision(2)<<m.real<<showpos<<m.imag<<'i'<<endl;
        return os;
    }
    //设置函数
    void setReal(double realVal){
        real=realVal;
    }
    void setImag(double imagVal){
        imag=imagVal;
    }
    //取值函数（用于非友元实现重载）
    double getReal(){
        return real;
    }
    double getImag(){
        return imag;
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
    cin >> c1 >> c2 ;
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
    cout << c5 ;
    return 0;
}