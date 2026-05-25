#include <iostream>

using namespace std;
int main(){
	int k;cin>>k;
	string s;cin>>s;
	if(s.size()%k!=0){
		cout<<-1<<endl;
	}
	
	return 0;
}
