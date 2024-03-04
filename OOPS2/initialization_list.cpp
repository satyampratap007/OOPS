#include <iostream>
using namespace std;

class Student {
    public:
        int age;
        const int rollNumber;
        const int roll;
        int &x; // age reference variable

        Student(int r, int roll) : rollNumber(r), roll(roll),x(this->age){ // Initialization List
            // rollNumber = r;
        }

        void display() {
            cout << this->age << " " << this->rollNumber << " " << this->roll << " " << x << "\n";
        }
};

int main() {
    Student s1(25,100);
    s1.age = 20;
    s1.display();
}



