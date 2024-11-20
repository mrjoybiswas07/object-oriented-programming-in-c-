#include <iostream>
using namespace std;

class student {
public:
    int student_id;
    string student_name;

    // Default constructor
    student() {
        student_id = 10;
        student_name = "joy";
    }

    // Parameterized constructor
    student(int id, string name) {
        student_id = id;
        student_name = name;
    }

    // Copy constructor
    student(const student &obj) {
        student_id = obj.student_id;
        student_name = obj.student_name;
    }
};

int main() {
    // Using default constructor
    student s1;
    cout << "s1.student_id: " << s1.student_id << endl;
    cout << "s1.student_name: " << s1.student_name << endl;

    // Using parameterized constructor
    student s2(11, "ram");
    cout << "s2.student_id: " << s2.student_id << endl;
    cout << "s2.student_name: " << s2.student_name << endl;

    // Using copy constructor
    student s3(s2);
    cout << "s3.student_id: " << s3.student_id << endl;
    cout << "s3.student_name: " << s3.student_name << endl;

    return 0;
}