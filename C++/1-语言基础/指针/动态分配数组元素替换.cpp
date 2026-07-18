//
// Created by whip on 2026/7/11.
//
//
// Created by whip on 2026/7/11.
//
#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int *p=new int[n];
    for (int i=0;i<n;i++){
        cin>>p[i];
    }


    cout<<"a["<<n<<"]={";
    for (int i=0;i<n;i++){
        if (i==n-1)cout<<p[i];
        else cout<<p[i]<<',';
    }
    cout<<"}"<<endl;

    for (int i=0;i<n;i++){
        if (p[i]<0)p[i]=0;
    }

    cout<<"a["<<n<<"]={";
    for (int i=0;i<n;i++){
        if (i==n-1)cout<<p[i];
        else cout<<p[i]<<',';
    }
    cout<<"}"<<endl;


}