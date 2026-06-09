//
// Created by whip on 2026/6/9.
//
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    fstream file("test.txt");
    if (file.bad()){
        return 1;
    }
    string s;
    getline(file,s);

    cout<<s<<endl;
    return 0;
}