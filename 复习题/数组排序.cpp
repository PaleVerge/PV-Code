//
// Created by whip on 2026/6/21.
//
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
void _sort(int a[],int n){
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-1-i;j++){
            if (a[j]>a[j+1]){
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
}
void _sort(string a[],int n){
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-1-i;j++){
            if (a[j]>a[j+1]){
                string tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
}
int main(){
    int n1,n2,a[20];
    string b[20];
    cin>>n1;
    for (int i=0;i<n1;++i){
        cin>>a[i];
    }
    cin>>n2;
    for (int i=0;i<n2;++i){
        cin>>b[i];
    }
    _sort(a,n1);
    _sort(b,n2);
    for (int i=0;i<n1;++i){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    for (int i=0;i<n2;++i){
        cout<<b[i]<<' ';
    }
    return 0;
}