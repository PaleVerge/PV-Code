//
// Created by whip on 2026/6/4.
//
#include <iostream>
using namespace std;

template <class T>
class queue{
public:
    queue(int num){
        maxCount=num;
        data = new T[num];
        rear=0;
        front=0;
    }
    ~queue(){
        delete []data;
    };
    bool insert(T item){
        if (rear+1>maxCount){
            return false;
        }else{
            data[rear++]=item;
            return true;
        }
    }
    T remove(){
        return data[front++];
    }
private:
    T *data;
    int maxCount;
    int front,rear;
};

int main(){
    queue<char> q( 3 ) ;
    q.insert( 'A' ) ;
    q.insert( 'B' ) ;
    q.insert( 'C' ) ;

    cout << q.remove() ;
    cout << q.remove() ;
    cout << q.remove() << endl;

    return 0;
}