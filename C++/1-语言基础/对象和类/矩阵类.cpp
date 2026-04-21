//
// Created by ritno on 2026/4/21.
//
#include <iostream>
using namespace std;

class matrix{
private:
    int m,n;
    int a[10][10];
public:
    matrix(int x,int y){
        m=x;n=y;
        int count=1;
        for (int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                a[i][j]=count++;
            }
        }
    }
    int at(int row,int col){
        return a[row-1][col-1];
    }
    int at(int row){
        return row;
    }
    int sum(){
        int rt=0;
        for (int i=1;i<=m*n;++i){
            rt+=i;
        }
        return rt;
    }
};

int main(){
    int rowNum,colNum;
    cin>>rowNum>>colNum;
    matrix mat(rowNum,colNum);
    cout<<mat.at(4)<<' '<<mat.at(3,4)<<' '<<mat.sum();
    return 0;
}