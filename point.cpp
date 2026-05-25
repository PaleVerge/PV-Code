#include <iostream>

using namespace std;
struct stu{
	int sNo;
	string sName;
};
int main(){
//	struct stu s,*ps=&s;
//	
//	s.sNo=1;
//	cout<<s.sNo<<endl;
//	
//	(*ps).sNo=2;
//	cout<<(*ps).sNo<<endl;
//	
//	ps->sNo=3;
//	cout<<ps->sNo<<endl;
	int *pArr[3];
	for(int i=0;i<3;++i){
		for(int j=0;j<4;++j){
			cin>>pArr[i][j];
		}
	}
	return 0;
}
