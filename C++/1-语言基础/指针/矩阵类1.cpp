//
// Created by whip on 2026/7/11.
//
#include <iostream>
using namespace std;

class matrix{
public:
    matrix(int m,int n){
        row=m,col=n;
        pp=new int*[row];
        for (int i=0;i<row;i++){
            pp[i]=new int[col];
        }
        int idx=1;
        for (int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                pp[i][j]=idx;
                idx++;
            }
        }
    }
    ~matrix(){
        for (int i=0;i<row;i++){
            delete pp[i];
        }
        delete []pp;
    }
    int sum(){
        int tot=0;
        for (int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                tot+=pp[i][j];
            }
        }
        return tot;
    }
    int at(int x){
        return pp[(x-1)/col][(x-1)%col];
    }
    int at(int x,int y){
        return pp[x-1][y-1];
    }
private:
    int row,col;
    int** pp;
} ;


int main(){
    int rowNum,colNum;
    cin>>rowNum>>colNum;
    matrix mat(rowNum,colNum);
    cout<<mat.at(4)<<' '<<mat.at(3,4)<<' '<<mat.sum();
    return 0;
}