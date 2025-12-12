//
// Created by rint on 2025/12/10.
//
#include<iostream>
#include <iomanip>
using namespace std;
bool isPrime(int n);
int main() {
    int count=0;
    for (int i=2;i<=1000;i++) {
        if (isPrime(i)) {
            count++;
            cout<<i<<" ";
            if (count%8==0) {
                cout<<endl;
            }
        }
    }
    cout<<"\nThe count is "<<count<<endl;
    return 0;
}

    bool isPrime(int n) {
        if (n<=1)
            return false;
        if (n==2)
            return true;
        if (n%2 == 0)
            return false;
        for (int i=3; i*i<=n; i+=2) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }