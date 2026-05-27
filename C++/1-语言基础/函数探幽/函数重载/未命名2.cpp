#include <bits/stdc++.h>
using namespace std;
const double pi=3.14;
double aera(double r){
	return pi*r*r;
}
double aera(double a,double b){
	return a*b;
}
double aera(double a,double b,double h){
	return (a+b)*h/2;
}
int main(){
	float r,l,w,a,b,h;
	cin>>r>>l>>w>>a>>b>>h;
	cout<<fixed<<setprecision(2)<<aera(r)<<' '<<aera(l,w)<<' '<<aera(a,b,h)<<endl;
	return 0;
}
