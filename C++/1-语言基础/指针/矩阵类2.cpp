//
// Created by ritno on 2026/5/8.
//
#include <iostream>
using namespace std;
class matrix{
private:
    int row,col;
    int **pp;
public:
    matrix(int m,int n){
        row=m;
        col=n;
        pp=new int *[row];
		for(int i=0;i<row;++i){
            pp[i]=new int[col];
		}
    }
    ~matrix(){
        for(int i = 0; i < row; ++i)
            delete[] pp[i];
        delete[] pp;
    }
    void input(){
        for (int i=0;i<row;++i){
            for (int j=0;j<col;++j){
                cin>>pp[i][j];
            }
        }
    }
    int at(int i){
        return pp[(i-1)/col][(i-1)%col];
    }
    int at(int i,int j){
        return pp[i-1][j-1];
    }
    int sum(){
        int sum=0;
        for (int i=0;i<row;++i){
            for (int j=0;j<col;++j){
                sum+=pp[i][j];
            }
        }
        return sum;
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