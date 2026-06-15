#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float a,b,c;
    cin>>a>>b>>c;
    float sum =  a+b+c;
    float ave = sum / 3;
    cout<<fixed<<setprecision(3)<<sum<<" "<<ave<<"\n";
    return 0;
}
