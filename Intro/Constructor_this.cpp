#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    int roll;

    private:
    int age;

    public:

    // Default Constructor
    Student () {
        cout << "Constructor Called!" << endl;
    }

// Parametrized Constructor
    Student (int roll) {
        this->roll = roll;
        cout << "Parametrized Constuctor called!" << endl;
    }
    Student (int age, int roll){
        cout << this << " " << "\n";
        this->roll = roll;
        this->age = age ;
        cout << "Constructor 3 Called\n" ;
    }
    void display () {
        cout << roll <<" "<< age;
    }

    void setAge(int a){ // setter
        this->age = a;
    }
    int getAge() {  // getter
        return age;
    }


};

int main() {
    Student s1;
    s1.display();  // gives the garbage value for the variable 
    cout << "\n";
    Student *s2 = new Student;
    cout << "\n";
    s2->display();
    cout << "\n\n";

    // Parametrized Constructor
    Student para(10);
    cout << "\n\n";
    para.display(); // 10 garbage val
    cout << "\n\n";

    cout << "\n\n";
    Student s4(18,89);
    s4.display();
    cout << "\n\n";

    cout << "Address of s4: " << &s4;
    cout << "\n";
} 