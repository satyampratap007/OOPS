#include <bits/stdc++.h>
using namespace std;
class Student {
    int age;
    char *name;

    public:
    Student (int age, char*name){
        this->age = age;

        // Shallow Copy (Just copying the refernce rahter than copying the whole array, this will change the original value if we changeg it at either place)
        // this->name = name;

        // Deep Copy
        this->name = new char [strlen(name) + 1];
        strcpy(this->name, name);

        // This will create a seperate copy of any variable and whatever changes we will make in child variable won't reflect in parent variable; 

    }
    void display() {
        cout << this->name << " " << this->age << "\n";
    }
};

int main() {
    char name [] = "Satyam";
    Student s1(25,name);
    s1.display();

    name[5] = 'p';
    Student s2 (23, name);
    s2.display();
    s1.display();
}