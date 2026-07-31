//
// Created by whip on 2026/6/4.
//
#include <iostream>
using namespace std;

template <class T>
class Array{
private:
    T *data;
    int num;
public:
    //合并默认构造函数和带参构造函数
    Array(int n=0){
        data=n>0?(new T[n]):nullptr;
        num=n;
    }
    ~Array(){
        delete []data;
    }
    int sizeOfArray()const{
        return num;
    }
    void display()const {
        for (int i=0;i<num;++i){
            cout<<data[i]<<' ';
        }
    }
    void input(){
        for (int i=0;i<num;++i){
            cin>>data[i];
        }
    }
};

int main(){
    int choice, n;
    cin >> choice;
    cin >> n;
    if (choice == 1){
        Array<int> arr(n);
        arr.input();
        arr.display();
    }else if (choice == 2){
        Array<double> arr(n);
        arr.input();
        arr.display();
    }else if (choice == 3){
        Array<char> arr(n);
        arr.input();
        arr.display();
    }
}