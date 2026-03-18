#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    string s;getline(cin,s);
    for (int i=0;i<s.length();i++)
    {
        if (!isdigit(s[i]))
        {
            cout<<"error"<<'\n';
            return 0;
        }
    }
    int n=atoi( s.c_str());
    cout<<n+1<<'\n';
    return 0;
}