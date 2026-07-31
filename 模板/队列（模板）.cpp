//
// Created by whip on 2026/7/11.
//
#include <iostream>
using namespace std;
template<class T>
class queue{
private:
    T *data;
    int maxCount;
    int  front,rear;
public:
    queue(int num){
        maxCount=num;
        data=new T[maxCount];
        front=0;
        rear=0;
    }
    ~queue(){
        delete data;
    }

    bool insert(T item){
        if (rear==maxCount){
            cout<<"manle!@"<<endl;
            return false;
        }
        data[rear]=item;
        rear++;
        return true;
    }

    T remove(){
        T tmp=data[front];
        front++;
        return tmp;
    }
};
int main()
{
    queue<char> q( 3 ) ;
    q.insert( 'A' ) ;
    q.insert( 'B' ) ;
    q.insert( 'C' ) ;

    cout << q.remove() ;
    cout << q.remove() ;
    cout << q.remove() << endl;
    return 0;
}