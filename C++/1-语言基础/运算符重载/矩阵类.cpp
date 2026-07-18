//
// Created by ritno on 2026/5/11.
//
#include <iostream>
using namespace std;
class matrix{
private:
    int rows,cols;
    int **data;
public:
    matrix(){
        rows=0;
        cols=0;
        data=nullptr;
    }
    matrix(int m,int n){
        rows=m;
        cols=n;
        data=new int *[rows];
        for(int i=0;i<rows;++i){
            data[i]=new int[cols];
        }
    }
    matrix(const matrix &m){
        rows=m.rows;
        cols=m.cols;
        data=new int *[rows];
        for(int i=0;i<rows;++i){
            data[i]=new int[cols];
        }
        for(int i=0;i<rows;++i){
            for (int j=0;j<cols;++j){
                data[i][j]=m.data[i][j];
            }
        }
    }
    ~matrix(){
        for(int i = 0; i < rows; ++i){
            delete[] data[i];
        }
        delete[] data;
    }
    matrix operator+(const matrix m)const{
        matrix tmp(rows,cols);
        for(int i=0;i<rows;++i){
            for (int j=0;j<cols;++j){
                tmp.data[i][j]=data[i][j]+m.data[i][j];
            }
        }
        return tmp;
    }
    matrix operator-(const matrix m)const{
        matrix tmp(rows,cols);
        for(int i=0;i<rows;++i){
            for (int j=0;j<cols;++j){
                tmp.data[i][j]=data[i][j]-m.data[i][j];
            }
        }
        return tmp;
    }
    matrix operator=(matrix m){
        for (int i=0;i<rows;++i){
            delete data[i];
        }
        delete [] data;
        rows=m.rows;
        cols=m.cols;

        data = new int*[rows];
        for (int i=0;i<rows;++i){
            data[i]=new int[cols] ;
        }
        for(int i=0;i<rows;++i){
            for (int j=0;j<cols;++j){
                data[i][j]=m.data[i][j];
            }
        }
        return *this;
    }
    friend istream& operator>>(istream& is,matrix& m){
        for(int i=0;i<m.rows;++i){
            for (int j=0;j<m.cols;++j){
                is>>m.data[i][j];
            }
        }
        return is;
    }
    friend ostream& operator<<(ostream& os,matrix &m){
        for(int i=0;i<m.rows;++i){
            for (int j=0;j<m.cols;++j){
                os<<m.data[i][j]<<' ';
            }
            cout<<endl;
        }
        return os;
    }
};
int main(){
    int m, n;
    cin >> m >> n;
    matrix mat1(m, n), mat2(m, n), mat3, mat4;
    cin >> mat1 >> mat2;
    mat3 = mat1 + mat2;
    cout << mat3;
    mat4 = mat1 - mat2;
    cout << mat4;
    return 0;
}