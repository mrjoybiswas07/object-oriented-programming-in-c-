#include <iostream>
using namespace std;

class cfg {
private:
    int private_variable;
protected:
    int protected_variable;
public:
    cfg() {
        private_variable = 10;
        protected_variable = 15;
    }
    friend class f; 
};

class f {
public:  
    void display(cfg &f) { 
        cout << "Private variable is:-" << f.private_variable << endl;
        cout << "Protected variable is:-" << f.protected_variable << endl;
    }
};

int main() {
    cfg g;   
    f fri;  
    fri.display(g);  
    return 0;
}
