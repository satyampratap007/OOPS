#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    char Name[100];
    int age;
    int RollNo;
};

int main() {
    Student s1; // Statically
    Student *s2 = new Student;   // Dynamically
     
    s2->age = 12;
    // OR
    (*s2).age = 15;
    strcpy(s2->Name, "satyam");
    s2->RollNo = 1;

    cout << s2->age << " " << s2->RollNo << "\n" << s2->Name ;
}


