//
// Created by whip on 2026/7/11.
//
//
// Created by whip on 2026/7/11.
//
#include <iostream>
using namespace std;
class point{
public:
    int x,y;
    point(int _x=0,int _y=0){
        x=_x;
        y=_y;
    }
    point operator+(point t){
        point tmp;
        tmp.x=x;
        tmp.y=y;

        tmp.x+=t.x;
        tmp.y+=t.y;

        return tmp;
    }
    point operator-(point t){
        point tmp;
        tmp.x=x;
        tmp.y=y;

        tmp.x-=t.x;
        tmp.y-=t.y;

        return tmp;
    }
    bool operator==(point t){
        if (x==t.x && y==t.y){
            return true;
        }
        return false;
    }
    bool operator!=(point t){
        if (x!=t.x || y!=t.y){
            return true;
        }
        return false;
    }
};
ostream& operator<<(ostream& os,point &t){
    os<<'('<<t.x<<','<<t.y<<')'<<endl;
    return os;
}
istream& operator>>(istream& is,point &t){
    is>>t.x>>t.y;
    return is;
}

int main(){
    point  x, y, z1, z2;
    cin>>x>>y;
    z1=x+y;
    z2=x-y;
    cout<<z1<<z2;

    if(x==y)   cout<<"x==y"<<endl;
    else   cout<<"x!=y"<<endl;

    if(z1!=z2)   cout<<"z1!=z2"<<endl;
    else   cout<<"z1==z2"<<endl;

    return 0;
}