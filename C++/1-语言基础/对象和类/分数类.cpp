//
// Created by ritno on 2026/4/21.
//
//
// Created by ritno on 2026/4/21.
//
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class fraction{
private:
    int mom,son;
    int gcd(int a,int b){
        a=abs(a);
        b=abs(b);
        while (b){
            a%=b;
            swap(a,b);
        }
        return a;
    }
public:
    fraction(){
        mom=1;son=0;
    }
    fraction(int _son,int _mom){
        mom=_mom;
        son=_son;
    }
    void input(){
        cin>>son>>mom;
    }
    void output(){
        if (mom<0){
            mom=-mom;
            son=-son;
        }
        int comm=gcd(mom,son);
        mom=mom/comm;
        son=son/comm;
        if(mom==1){
            cout<<son<<endl;
        }else{
            cout<<son<<'/'<<mom<<endl;
        }
    }
};

int main(){
    int a, b;
    cin >> a >> b;
    fraction x1, x2(a,b);
    x1.output();
    x2.output();
    x2.input();
    x2.output();
    return 0;
}