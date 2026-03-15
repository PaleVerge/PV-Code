#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a,b,c;cin>>a>>b>>c;
    double tot=a+b+c;
    double avg=tot/3.0;
    cout<<fixed<<setprecision(3)<<tot<<' '<<avg<<endl;
    return 0;
}
