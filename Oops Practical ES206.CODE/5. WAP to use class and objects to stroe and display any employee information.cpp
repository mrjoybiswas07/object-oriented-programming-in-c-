#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    string name;
    float salary;
    string address;
    void insert(){
        cout<<"\n Enter id:- ";
        cin>>id;
        cout<<"\n Enter name:- ";
        cin>>name;
        cout<<"\n Enter salary:-";
        cin>>salary;
        cout<<"\n Enter address:-";
        cin>>address;
    }
    void display(){
        cout<<"\n ID:-"<<id;
        cout<<"\n Name is :-"<<name;
        cout<<"\n Salary is :-"<<salary;
        cout<<"\n Address is :-"<<address;
    }
};
int main(){
    employee e1;
    e1.insert();
    e1.display();
    return 0;
}