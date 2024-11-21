// write a program to access private or protected data outside a class 
 #include <iostream>

using namespace std;

class Parent {
public:
    virtual void display() {
        cout << "This is the public display." << endl;
    }
};

class Child : public Parent {
private:
    int secretKey;

public:
    Child(int key) {
        secretKey = key;
    }

    void display()  {
        cout << "The secret key is: " << secretKey << endl;
    }
};

int main() {
    Child c1(1019);

    Parent *obj = &c1; // Pointer to base class pointing to a derived object

    obj->display(); // Calls the derived class's display()

    return 0;
}