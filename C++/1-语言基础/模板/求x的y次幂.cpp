 //
// Created by whip on 2026/6/1.
//
//
// Created by whip on 2026/6/1.
//
#include <iostream>
#include <string>
using namespace std;

template <typename T>
T power(T x,int y){
 if (y==0)return 1;
 T res=1;
 for (int i=0;i<y;++i){
  res*=x;
 }
 return res;
}
int main(){
 int a,b;
 cin>>a>>b;
 cout<<power(a,b)<<endl;
 double c;int d;
 cin>>c>>d;
 cout<<power(c,d);
 return 0;
}
