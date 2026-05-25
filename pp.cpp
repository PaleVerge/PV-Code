#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int rows,cols,**pp;
	
	cout<<"please input the rows:";
	cin>>rows;
	cout<<"please input the cols:";
	cin>>cols;
	
	pp=new int * [rows];
	for(int i=0;i<rows;++i){
		pp[i]=new int[cols];
	}
	for(int i=0;i<rows;++i){
		for(int j=0;j<cols;++j){
			cin>>pp[i][j];
		}
	}
	for(int i=0;i<rows;++i){
		for(int j=0;j<cols;++j){
			cout<<pp[i][j]<<' ';
		}
		cout<<endl;
	}
	for(int i=0;i<rows;++i){
		delete [] pp[i];
	}
	delete pp;
	return 0;
}
