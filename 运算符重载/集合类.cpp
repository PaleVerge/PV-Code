//
// Created by ritno on 2026/5/11.
//
#include <iostream>
#include <algorithm>
using namespace std;
class settype{
private:
    int n;
    int *set;
public:
    settype(){
        n=0;
        set=NULL;
    }
    settype(const settype& B){
        n=B.n;

        set= new int[n];
        for (int i=0;i<n;++i){
            set[i]=B.set[i];
        }
    }

    ~settype(){
        delete []set;
    }
    void getdata(int *a, int& num) const{
        num=n;
        for (int i=0;i<n;++i){
            a[i]=set[i];
        }
    }
    void setdata(int *a, int num){
        n=num;
        delete []set;
        set=new int[n];
        for (int i=0;i<n;++i){
            set[i]=a[i];
        }
    }
    int get_n() const{
        return n;
    }
    settype operator-(const settype& B){

        settype tmp;

        tmp.set=new int[n+B.n];

        int i=0,j=0,k=0;
        while (i<n&&j<B.n){
            if (set[i]<B.set[j]){
                tmp.set[k++]=set[i++];
            }else if (set[i]>B.set[j]){
                j++;
            }else{
                i++;j++;
            }
        }
        while(i < n)
            tmp.set[k++] = set[i++];

        tmp.n=k;
        return tmp;
    }
    settype operator+(const settype& B){
        sort(set,set+n);
        sort(B.set,B.set+B.n);
        settype tmp;
        tmp.set=new int[n+B.n];

        int k=0;

        for (int i=0;i<n;++i){
            tmp.set[k++]=set[i];
        }

        for (int i=0;i<B.n;++i){
            bool flag =false;
            for (int j=0;j<n;++j){
                if (B.set[i]==set[j]){
                    flag=true;
                    break;
                }
            }
            if (!flag){
                tmp.set[k++]=B.set[i];
            }
        }
        tmp.n=k;
        return tmp;
    }
    settype operator*(const settype& B){
        sort(set,set+n);
        sort(B.set,B.set+B.n);
        settype tmp;
        tmp.set=new int[n+B.n];

        int i=0,j=0,k=0;
        while (i<n&&j<B.n){
            if (set[i]<B.set[j]){
                i++;
            }else if (set[i]>B.set[j]){
                j++;
            }else{
                tmp.set[k++]=set[i];
                i++;j++;
            }
        }
        tmp.n=k;
        return tmp;
    }

    settype& operator=(const settype& B){
        n=B.n;
        delete []set;
        set=new int[n];
        for (int i=0;i<n;++i){
            set[i]=B.set[i];
        }
        return (*this);
    }
    friend ostream& operator<<(ostream& os,settype & s){
        os<<'{';
        for (int i=0;i<s.n;++i){
            os<<s.set[i]<<((i==s.n-1)?"":",");
        }
        os<<'}'<<endl;
        return os;
    }
    friend istream& operator>>(istream& is,settype & s){
        delete []s.set;

        is>>s.n;
        s.set=new int[s.n];
        for (int i=0;i<s.n;++i){
            is>>s.set[i];
        }
        return is;
    }
};

int main(){
    settype A, B, C;
    cin>>A>>B;

    cout<<"A="<<A;
    cout<<"B="<<B;

    C=A+B;
    cout<<"A+B="<<C;

    C=A*B;
    cout<<"A*B="<<C;

    C=A-B;
    cout<<"A-B="<<C;
    return 0;
}