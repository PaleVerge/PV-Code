#include <iostream>
using namespace std;
class teacher{
	private:
		string jobNo;
		string name;
		int base_pay;
		int allowance;
		int insurance;
		int total_pay;
		int real_pay;
	public:
		teacher(string _jobNo,string _name,int _base_pay=0,int _allowance=0,int _insurance=0){
			name=_name;
			jobNo=_jobNo;
		}
		teacher(string _jobNo,string _name,int _base_pay,int _allowance,int _insurance){
			name=_name;
			jobNo=_jobNo;
			base_pay=_base_pay;
			allowance=_allowance;
			insurance=_insurance;
		}
		void input(int _base_pay,int _allowance,int _insurance){
			base_pay=_base_pay;
			allowance=_allowance;
			insurance=_insurance;
		}
		void display(){
			cout<<jobNo<<' '<<name<<' '<<base_pay<<' '<<allowance<<' '<<insurance<<' '<<total_pay<<' '<<real_pay<<'\n';
		}
		int slary(){
			total_pay=base_pay+allowance;
			real_pay=tot_pay-insurance;
		}
			
};
int main(){
	teacher t1("111","Mary"),t2("222","Alex",
	4256.78,1234.56,895.17);
	t1.display();
	t2.display();
	return 0;
}
