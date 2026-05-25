#include <iostream>
#include <iomanip>
using namespace std;
double area(double r){
	return 3.14*r*r;
}
double area(double a,double b){
	return a*b;
}
double area(double s1,double s2,double h){
	return (s1+s2)*h/2.0;
}
int main(){
	float r,a,b,s1,s2,h;
	cin>>r>>a>>b>>s1>>s2>>h;
	cout<<fixed<<setprecision(2)<<area(r)<<' '<<area(a,b)<<' '<<area(s1,s2,h);
	return 0; 	
 }
