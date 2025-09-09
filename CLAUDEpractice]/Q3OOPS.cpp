#include <iostream>
using namespace std;
class Student {
public: 
    string name;
    int roll_number;
    float marks;

    Student(string n, int roll, float m) { 
        name = n;
        roll_number = roll;
        marks = m;
    }
    
    void display_student_details() {
        cout << "Name: " << name << ", Roll Number: " << roll_number << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1("Parteek Marve", 1330, 85.5);
    s1.display_student_details();


}