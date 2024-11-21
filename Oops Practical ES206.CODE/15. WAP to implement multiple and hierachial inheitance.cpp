// WAP to implement multiple and hierachial inheitance
#include <iostream>

using namespace std;

class Parent {
protected:
    int age;

public:
    Parent(int a) {
        age = a;
        cout << "Parent Constructor Called, age: " << age << endl;
    }
};

class Child : public Parent {
public:
    Child(int a) : Parent(a) {
        cout << "Child Constructor Called, age: " << age << endl;
    }
};

class GrandChild : public Child {
public:
    GrandChild(int a) : Child(a) {
        cout << "GrandChild Constructor Called, age: " << age << endl;
    }
};

int main() {
    GrandChild gc(10);

    return 0;
}