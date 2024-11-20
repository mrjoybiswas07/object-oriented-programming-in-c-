// WAP a program using class object & friend function in c++
#include<iostream>
using namespace std;

class base {
    private:
    int private_var;
    protected:
    int protected_var;
    public:
    base(){
        private_var = 10;
        protected_var=15;
    }
    friend void friendfunction(base&obj);
};
void friendfunction(base&obj){
    cout<<"Private variable is "<<obj.private_var<<endl;
     cout<<"proctected variable is "<<obj.private_var<<endl;
}
int main(){
    base obj;
    friendfunction(obj);
    return 0;
}