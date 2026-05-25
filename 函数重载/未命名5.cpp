#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
int f(int a,int b=4){
	return a+b;
}
int main(){
//	char str[20];
//	string s;
//	cin>>str;
//	getline(cin,s);
//	cout<<"str:"<<str<<'^'<<endl;
//	cout<<"s:"<<s<<'^'<<endl;
	//cout<<'1'<<setfill('#')<<left<<setw(5)<<'2'<<endl;
//	int a=100;
//	int &r=a;
//	r=200;
//	cout<<a<<' '<<r;
//	string s="123456789";
//	int pos=s.find("j");
//	cout<<pos;
//	char str[20];
//	cin>>str;
//	cout<<str;
	//cout.put('d');
	cout<<setprecision(8)<<3.14<<'#';
	cout<<setw(6)<<1.25<<'#';
	cout<<setw(6)<<setfill('*')<<12<<"#";
	cout<<left<<8<<"#"<<endl;
//	string s1,s2;
//	int a=9;
//	getline(cin,s1);
//	getline(cin,s2);
//	s1.swap(&s2);
	return 0;
}
