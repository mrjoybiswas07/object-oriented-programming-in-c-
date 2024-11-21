// WAP to implement operator overloding in c++
#include<iostream>
using namespace std;
class complex {
    private:
    int real, imaginary;
    public:
    complex(int r = 0, int i = 0) {
        real = r;
        imaginary = i;
}
    complex operator+(complex const & obj){
        complex res;
        res.real =real +obj.real;
        res.imaginary=imaginary+obj.imaginary;
        return res;
    }
    void print(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
};
int main() {
    complex c1(3, 2);
    complex c2(1, 4);
    complex c3 = c1 + c2;
    cout<<"result of additon:-";
    c3.print();
    return 0;
}