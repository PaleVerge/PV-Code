#include <iostream>
#include <iomanip>

using namespace std;
const double pi=3.14;
//圆面积
double area(double r){
	return pi*r*r;
}
//矩形面积
double area(double a,double b){
	return a*b;
}
//梯形面积
double area(double a,double b,double h){
	return (a+b)*h/2;
}

int main(){
	float r,l,w,a,b,h;
	cin>>r>>l>>w>>a>>b>>h;
	cout<<fixed<<setprecision(2)<<area(r)<<' '<<area(l,w)<<' '<<area(a,b,h)<<endl;
	return 0;
}
