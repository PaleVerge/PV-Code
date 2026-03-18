//
// Created by ritno on 2026/3/18.
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool inword=false;
    string s;
    double count=0,tot=0;

    getline(cin,s);
    for (int i=0;i<s.length();i++)
    {
        if (s[i]==' ' || s[i]==',' || s[i]=='.')
        {
           inword=false;
        }else{
            tot++;
            if (!inword)
            {
                count++;
                inword=true;
            }
        }
    }
    cout<<tot/count<<endl;
}