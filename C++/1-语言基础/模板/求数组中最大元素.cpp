//
// Created by whip on 2026/6/4.
//
#include <iostream>
#include <string>
using namespace std;
template <typename T>
T largest_element(T a[],int n){
    T max=a[0];
    for (int i=1;i<n;++i){
        if (max<a[i]){
            max=a[i];
        }
    }
    return max;
}
int main(){

    int n;cin>>n;
    int a[10];
    for (int i=0;i<n;++i){
        cin>>a[i];
    }
    cout<<largest_element(a,n)<<endl;

    cin>>n;
    double b[10];
    for (int i=0;i<n;++i){
        cin>>b[i];
    }
    cout<<largest_element(b,n)<<endl;

    cin>>n;
    char c[10];
    for (int i=0;i<n;++i){
        cin>>c[i];
    }
    cout<<largest_element(c,n)<<endl;

    return 0;
}