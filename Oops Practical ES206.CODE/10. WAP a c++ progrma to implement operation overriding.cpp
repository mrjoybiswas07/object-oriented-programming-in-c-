// WAP a c++ progrma to implement operation overriding
#include<iostream>
using namespace std;
class base{
    public:
    void print(){
        cout<<"Base function"<<endl;
    }
};
class derived:public base{
    public:
    void print(){
        cout<<"Derived function"<<endl;
}
};
int main(){
    derived d1;
    d1.print();
    d1.base::print();
    return 0;
}