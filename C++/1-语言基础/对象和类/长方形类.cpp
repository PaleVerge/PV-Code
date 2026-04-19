#include <iostream>
#include <iomanip>
using namespace std;
class rectangle{
public:
    rectangle();
    rectangle(double length,double width);
    void assign(double a,double b);
    double circumference();
    double aera();
    void show();
private:
    double length;
    double width;
};
rectangle::rectangle(){
    length=0;
    width=0;
}
rectangle::rectangle(double x,double y){
    length=x;
    width=y;
}
void rectangle::assign(double a,double b){
    length=max(a,b);
    width=min(a,b);
}
double rectangle::circumference(){
    return 2*(length+width);
}
double rectangle::aera(){
    return width*length;
}
void rectangle::show(){
    cout<<fixed<<setprecision(2)<<length<<','<<width<<','<<circumference()<<','<<aera()<<'\n';
}
int main(){
    rectangle c1,c2(2.0,1.0),c3;
    double x,y;
    cin>>x>>y;
    c3.assign(x,y);
    c1.show();
    c2.show();
    c3.show();

    return 0;
}