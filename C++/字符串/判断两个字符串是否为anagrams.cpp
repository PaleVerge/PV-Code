//
// Created by ritno on 2026/3/18.
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    if (s1.length()!=s2.length())
    {
        cout<<"no";
        return 0;
    }
    for (int i=0;i<s1.length();i++)
    {
        if (s2.find(s1[i])!=string::npos)
        {
            s2.erase(s2.find(s1[i]),1);
        }else
        {
            cout<<"no"<<endl;
            return 0;
        }
    }
    if (s2.empty())
    {
        cout<<"yes"<<endl;
    }else
    {
        cout<<"no"<<endl;
    }
}