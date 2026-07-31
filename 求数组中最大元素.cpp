//
// Created by whip on 2026/7/11.
//
#include<iostream>
using namespace std;

template<typename T>
T largest_element(T a[],int n){
    T max=a[0];
    for (int i=1;i<n;i++){
        if (a[i]>max)max=a[i];
    }
    return max;
}
int main(){
    int n;
    int a[10];
    double b[10];
    char c[10];

    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<largest_element<int>(a,n)<<endl;

    cin>>n;
    for (int i=0;i<n;i++){
        cin>>b[i];
    }
    cout<<largest_element<double>(b,n)<<endl;

    cin>>n;
    for (int i=0;i<n;i++){
        cin>>c[i];
    }
    cout<<largest_element<char>(c,n)<<endl;

    return 0;
}