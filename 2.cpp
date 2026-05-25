#include <iostream>
#include <iomanip>
using namespace std;

class bank_account{
	private:
		
	public:
		bank_account(){
			cout<<'*'<<endl;;
		}
		int id=10;
	protected:
		
};
class t{
	public:
		void display(bank_account b){
			cout<<b.id;
		}
};
int main(){
	bank_account b1,b2,*b3,*b4;
	t t1;
	t1.display(b1);
	return 0; 	
 }
