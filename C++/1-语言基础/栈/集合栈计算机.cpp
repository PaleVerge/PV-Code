//
// Created by ritno on 2026/5/24.
//
#define ALL(x) x.begin(),x.end()
#define INS(x) inserter(x,x.begin())

#include <iostream>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

typedef set<int> Set;//将集合表示为所包含元素的ID的集合
map<Set,int> IDcache;//输入一个集合，返回对应的ID
vector<Set> Setcache;//输入一个集合，返回对应的ID

int ID(Set x){
    if (IDcache.count(x))return IDcache[x];
    //集合存在直接返回ID
    Setcache.push_back(x);//新集合放到vector结尾
    return IDcache[x]=Setcache.size()-1;//ID即为vector的下标
    //记录到map
}


int main(){
    stack<int> s;
    int t;cin>>t;
    while (t--){
        int n;cin>>n;
        for (int i=0;i<n;++i){
            string option;cin>>option;
            if (option[0]=='P')
                s.push(ID(Set()));//push压入一个空集
            else if (option[0]=='D')
                s.push(s.top());//将栈顶再次压入（复制栈顶集合）
            else{
                Set x1=Setcache[s.top()];
                s.pop();
                Set x2 = Setcache[s.top()];
                s.pop();
                Set x;
                //弹出两个集合，创建新集合
                if (option[0]=='U')
                    set_union(ALL(x1),ALL(x2),INS(x));
                //将x1和x2合并到x
                if (option[0]=='I')
                    set_intersection(ALL(x1),ALL(x2),INS(x));
                //找交集并入栈
                if (option[0]=='A'){
                    x=x2;
                    x.insert(ID(x1));
                }
                s.push(ID(x));

            }
            cout<<Setcache[s.top()].size()<<endl;
            //输出栈顶元素集合元素个数
        }
        cout<<"***"<<endl;
    }
    return 0;
}