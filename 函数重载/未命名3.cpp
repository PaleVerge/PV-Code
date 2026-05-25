#include <bits/stdc++.h>
using namespace std;
const int N=11;
string s[N];
int main(){
	int n;cin>>n;
	cin.ignore();
	for(int i=0;i<n;++i){
		getline(cin,s[i]);
	}
	string min=s[0];
	for(int i=1;i<n;++i){
		if(s[i].size()<min.size()){
			min=s[i];
		}
	}	
	cout<<min;
	return 0;
}
