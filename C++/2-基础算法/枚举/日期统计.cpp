//
// Created by whip on 2026/5/27.
//
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int a[100]={5,6,8,6,9,1,6,1,2,4,9,1,9,8,2,3,6,4,7,7,5,9,5,0,3,8,7,5,8,1,5,8,6,1,8,3,0,3,7,9,2,7,0,5,8,8,5,7,0,9,9,1,9,4,4,6,8,6,3,3,
8,5,1,6,3,4,6,7,0,7,8,2,7,6,8,9,5,6,5,6,1,4,0,1,0,0,9,4,8,0,9,1,2,8,5,0,2,5,3,3};

int dmoon[12]={31,28,31,30,31,30,31,31,30,31,30,31};

bool isdate(vector<int> vec){
    if (vec[0]!=2 || vec[1]!=0 || vec[2]!=2 ||vec[3]!=3)return false;
    int day=vec[6]*10+vec[7];
    int moon=vec[4]*10+vec[5];
    if (moon<1||moon>12)return false;

    if (day>0&&day<=dmoon[moon-1])
        return true;
    return false;
}
int main(){
    int cnt=0;
    //ifstream infile("data.txt");
    //while (infile>>a){
    //    cout<<a<<',';
    // }
    vector<int> vec;
    for (int i=0;i<92;++i){
        for (int j=i;j<i+8;j++){
            vec.push_back(a[j]);
        }
        if (isdate(vec)){
            cnt++;
        }
        vec.clear();
    }
    cout<<cnt<<endl;
    return 0;
}