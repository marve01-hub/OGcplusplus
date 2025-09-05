#include<iostream>
using namespace std;
class Student {
public:
    string name;
    int age;

    // Constructors
    Student(int age, string name,float cgpa ) {
        this->name = name;
        this->age = age;
        this->cgpa = cgpa;
    }   
    
    void result(){
        cout << "Name: " << name << ", Age: " << age << ", CGPA: " << cgpa << endl;
     }

    // Getter 
    float getCgpa() {
        return cgpa;
    }

    // Setter
    void setCgpa(float newCgpa) {
        this->cgpa = newCgpa;
    }

private:
    float cgpa;    
};
int main() {
    Student s1(18, "John Doe", 8.7);
    s1.setCgpa(9);
    s1.result();
}