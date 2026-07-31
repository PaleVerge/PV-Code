//
// Created by whip on 2026/6/9.
//
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    fstream file1("chap14_file3.txt");
    ofstream file2("chap14_file3_bak.txt",ios::trunc);
    if (!file1.is_open() || !file2.is_open()){
        return 1;
    }
    char c;
    while (file1.get(c)){
        if (c==' ' || c=='\t' || c=='\n')
            continue;
        file2.put(c);
    }

    file1.close();
    file2.close();

    ifstream file3("chap14_file3_bak.txt",ios::in);
    string s;
    getline(file3,s);
    cout<<s<<endl;
    file3.close();
    return 0;
}