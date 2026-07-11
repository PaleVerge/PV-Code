//
// Created by whip on 2026/7/11.
//
#include <iostream>
using namespace std;
class RMB{
private:
    int yuan,jiao,fen;
public:
    RMB(int _yuan=0,int _jiao=0,int _fen=0){
        yuan=_yuan,jiao=_jiao,fen=_fen;
    }
    void display(){
        cout<<yuan<<' '<<jiao<<' '<<fen<<endl;
    }

   const RMB operator+(int _fen){
        RMB tmp;
        tmp.yuan=yuan;
        tmp.fen=fen;
        tmp.jiao=jiao;

        for (int i=0;i<_fen;i++){
            tmp.fen++;
            if (tmp.fen>=10){
                tmp.fen=0;
                tmp.jiao++;
            }
            if (tmp.jiao>=10){
                tmp.jiao=0;
                tmp.yuan++;
            }
        }
        return tmp;
    }
};
int main()
{
    int yuan, jiao, fen; cin >> yuan >> jiao >> fen;
    RMB M1(yuan, jiao, fen), M2(0, 0, 0);
    int fen1; cin >> fen1;
    M2 = M1 + fen1;
    M2.display();
}