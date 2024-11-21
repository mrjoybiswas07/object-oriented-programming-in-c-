// WAP to implement pointer
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void setData(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person p;
    p.setData("joy", 18);
    p.display();
    return 0;
}