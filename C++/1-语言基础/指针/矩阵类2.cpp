//
// Created by ritno on 2026/5/8.
//
#include <iostream>
using namespace std;
class matrix{
private:
    int row,col;
    int *p;
public:
    matrix(int m,int n){
        row=m;
        col=n;
        =
        new p[m][n];
    }
    void input(){

    }
    int at(int i){

    }
    int at(int i,int j){


    }
    int sum(){

    }
};
int main(){
    int row, col, i, j;
    cin>>row>>col;
    matrix mat(row, col);
    mat.input();
    cin>>i;
    cout<<mat.at(i)<<endl;
    cin>>i>>j;
    cout<<mat.at(i,j)<<endl;
    cout<<mat.sum()<<endl;
    return 0;
}