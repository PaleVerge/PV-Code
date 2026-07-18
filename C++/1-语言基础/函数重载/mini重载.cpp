#include <iostream>
#include <string>

using namespace std;

int mini(const int a,const int b){
	return (a<b)?a:b;
}
double mini(const double a,const double b){
	return (a<b)?a:b;
}
string mini(string &a,string &b){
	return (a<b)?a:b;
}
int main(){
	int ia,ib;
	double da,db;
	string sa,sb;
	
	cin>>ia>>ib;
	cout<<mini(ia,ib)<<'\n';
	
	cin>>da>>db;
	cout<<mini(da,db)<<'\n';
	
	cin>>sa>>sb;
	cout<<mini(sa,sb)<<'\n';
	return 0;
}
