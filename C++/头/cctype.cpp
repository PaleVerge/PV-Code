#include <cctype>
#include <iostream>

using namespace std;

int main(){
    char ch1 = 'A';
    char ch2 = 'a';
    if(islower(ch1)){
        cout<<ch1<<" is a lowercase letter."<<endl;
    }
    
    return 0;
}