//
// Created by whip on 2026/7/11.
//
#include <iostream>
#include <iomanip>
using namespace std;

class student{
public:
    string name;
    int age,score;
    student(){
        cin>>name>>age>>score;
    }
};

class team{
private:
    student s[3];
public:
    team(){}
    void display(){
        for (int i=0;i<3;i++){
            cout<<s[i].name<<' '<<s[i].age<<' '<<s[i].score<<endl;
        }
    }
    void top(){
        int top=s[0].score;
        int max_idx=0;

        for (int i=1;i<3;i++){
            if (s[i].score>top){
                top=s[i].score;
                max_idx=i;
            }
        }
        cout<<s[max_idx].name<<' '<<s[max_idx].age<<' '<<s[max_idx].score<<endl;
    }
    double average(){
        double tot=0;
        for (int i=0;i<3;i++){
            tot+=s[i].score;
        }
        double ave=tot/3;
        return ave;
    }
};

int main()
{
    team t1;
    cout << "Team information:" << endl;
    t1.display();
    cout << "Top student information:" << endl;
    t1.top();
    cout << "Average score:" << endl;
    cout << fixed << setprecision(2);
    float avg = t1.average();
    cout << avg << endl;
    return 0;
}