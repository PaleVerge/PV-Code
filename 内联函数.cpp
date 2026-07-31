#include <iostream>
using namespace std;

inline int fun(int x,int y);

int main(){
	int a=12,b=10;

	cout<<fun(a,b);
	return 0;
}
inline int fun(int x,int y){
	return x+y;
}
