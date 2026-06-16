//
// Created by whip on 2026/5/27.
//
#include <iostream>

using namespace std;

int moon[12]={31,0,31,30,31,30,31,31,30,31,30,31};

bool israin(int year){
    if (year%400==0 || (year%4==0 && year%100!=0))
        return true;
    return false;
}
bool match(int year,int moon,int day){
    if (year%moon==0 && year%day==0)
        return true;
    return false;


}
int main(){
    int cnt=0;
    for (int i=2000;i<2000000;++i){
        if (israin(i)){
            moon[1]=29;
        }else{
            moon[1]=28;
        }
        for (int j=1;j<=12;++j){
            for (int k=1;k<=moon[j-1];++k){
                if (match(i,j,k)){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt+1<<endl;
    return 0;
}