//
// Created by ritno on 2026/5/17.
//
#include <iostream>
using namespace std;
class matrix{
private:
    int row;
    int col;
    int **pp;
public:
    matrix(int m,int n){
        row=m;
        col=n;
        pp=new int* [row];
        for (int i=0;i<row;++i){
            pp[i]=new int[col];
        }
    }
    ~matrix(){
        for (int i=0;i<row;++i){
            delete []pp[i];
        }
        delete []pp;
    }
    void input(){
        for (int i=0;i<row;++i){
            for (int j=0;j<col;++j){
                cin>>pp[i][j];
            }
        }
    }
    int sum(){
        int cnt=0;
        for (int i=0;i<row;++i){
            for (int j=0;j<col;++j){
                cnt+=pp[i][j];
            }
        }
        return cnt;
    }
    int at(int i){
        return pp[i/col-1][i%col-1];
    }
    int at(int i,int j){
        return pp[i-1][j-1];
    }

    //at(5)2/3-->1/2
    // 1 2 3
    // 4 5 6
    // 7 8 9
};
int main()

{

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