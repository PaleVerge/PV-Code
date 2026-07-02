//
// Created by whip on 2026/7/2.
//
#include <iostream>
using namespace std;
template<typename T>
T power(T a,int b){
    T ans=1;
    for (int i=0;i<b;i++){
        ans*=a;
    }
    return ans;
}

int main(){
    int a,b,c;
    double d;
    cin>>a>>b;
    cin>>d>>c;
    cout<<power<int>(a,b)<<endl<<power<double>(d,c);
    return 0;
}