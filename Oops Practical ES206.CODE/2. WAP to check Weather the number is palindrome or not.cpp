#include<iostream>
using namespace std;
int main(){
    int num,num2,rem,rev=0;
    cout<<"Enter your number:-";
    cin>>num;
    num2=num;
    while(num2=0){
        rem= num2%10;
        rev=(rev*10)+rem;
        num2=num2/10;
    }
    if(rev==num){
        cout<<num<<" is a Palindrom.";
    }
    else {
        cout<<num<<" is not a Palindrom.";
    }
    return 0;
}
