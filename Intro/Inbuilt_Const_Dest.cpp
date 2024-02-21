/* INBUILT CONSTRUCTOR AND DESTRUCTOR */


#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    int roll;
    int age;

    public:

    // Default Constructor
    Student () {
        cout << "Constructor Called!" << endl;
    }
    Student(int a, int r){
        age = a;
        roll = r;
    }

    void display () {
        cout << roll <<" "<< age;
        cout << "\n";   
    }

    // Destructor

    ~Student() {
        cout << "Destructor called!" << "\n";
    }
};

int main() {
    Student s1;
    s1.roll = 12,s1.age = 25;
// COPY CONSTRUCTOR
    Student s2(s1);
    s2.display();
    s1.display();
// Copy assignment operator

    Student s3(15,25);
    Student s4(45,30);
    s3 = s4;
    // s3.display(); 
    // s4.display(); 

    Student s5 = s4; // here also the copy Constructor is called
    Student *s6 = new Student(50,35);
    *s6 = s4;
    delete s6;   // need to explicitly release the memoryo
}