//
// Created by whip on 2026/6/4.
//
#include <iostream>
#include <string>
using namespace std;
template <class T>
class Array{
private:
    T *data;
    int num;
public:
    Array(int n){
        data=new T[n];
        num=n;
    }
    ~Array(){
        delete []data;
    }
    int sizeOfArray(){
        return num;
    }
    void display(){
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