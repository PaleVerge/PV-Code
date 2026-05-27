#include <bits/stdc++.h>
using namespace std;
const int N=25;
int a[N];
double d[N];

int minElement(int a[],int n){
	int min_ele=a[0];
	for(int i=1;i<n;++i){
		min_ele=min(min_ele,a[i]);
	}
	return min_ele;
}
double minElement(double a[],int n){
	double min_ele=a[0];
	for(int i=1;i<n;++i){
		min_ele=min(min_ele,a[i]);
	}
	return min_ele;
}
int main(){
	int m,n;
	
	cin>>m;
	for(int i=0;i<m;++i){
		cin>>a[i];
	}
	cout<<minElement(a,m)<<endl;
	
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>d[i];
	}
	cout<<minElement(d,n)<<endl;
}
