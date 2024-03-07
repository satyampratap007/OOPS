#include <iostream>
using namespace std;
// class Fraction {
//     private:
//         int numerator;
//         int denominator;
    
//     public:
//         Fraction() {}
//         Fraction(int num, int den) {
//             this->numerator = num;
//             this->denominator = den;
//         }   
    
//         int getNumerator() const {
//             return numerator;
//         }
    
//         int getDenominator() const {
//             return denominator;
//         }
       
//         void setNumerator(int num) {
//             numerator = num;
//         }
    
//         void setDenominator(int den) {
//             denominator = den;
//         }
        
//         void display() const {
//             cout << numerator << "/" << denominator << endl;
//         }
// };

// // Add more member functions here
// int main() {
//     Fraction f1(10,2);
//     Fraction f2(15,4);
    
//     Fraction const f3;
//     // f3.setNumerator(6); // read only Fraction
//     cout << f3.getNumerator() << " " <<f3.getDenominator();
// }


// Example Question



// class Student {
//     public :

//     int rollNumber;
//     int age;

// };


// int main() {
//     Student s1;

//     Student const s2 = s1;

//     s1.rollNumber = 101;
//     s1.age = 20;

//     cout << s2.rollNumber << " " << s2.age;  // Garbage Value

// }



class Student {
    int rollNumber;

    public :

    int age;

    Student(int r) {
        rollNumber = r;
    }

    int getRollNumber() {
        return rollNumber;
    }

};


int main() {
    Student s1(101);
    s1.age = 20;

    Student const s2 = s1;
    cout << s2.getRollNumber();  // Error we are calling fuction which are not constant member function
    
}