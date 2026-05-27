#include <bits/stdc++.h>
using namespace std;
int cube(int a){
	return a*a*a;
}
double cube(double a){
	return a*a*a;
}
string cube(string s){
	return s+s+s;
}
int main(){
	int a;double d;string s;
	
	cin>>a>>d>>s;
	cout<<cube(a)<<endl<<cube(d)<<endl<<cube(s)<<endl;
	return 0;
}
