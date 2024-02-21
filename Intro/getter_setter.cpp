#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll {5};

    private:
    int age{10};

    public:

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
    // s1.display();
    // s1.age = 15; // inacessible
    cout << s1.getAge();  // 10
    s1.setAge(15);
    cout << s1.getAge();  // 15
}