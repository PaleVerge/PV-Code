#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();++i){
		if(isdigit(s[i])){
			s.erase(i,1);
			i--;
		}
	}
	transform(s.begin(),s.end(),s.begin(),::toupper);
	cout<<s;
	return 0;
}
