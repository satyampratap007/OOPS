#include <iostream>
#include <string>
using namespace std;
   /********** STATIC VARIABLE **********/
// void demo()
// {
// 	// static variable   // Maintain previous State
// 	static int count = 0;
// 	cout << count  << "  " << &count<< "\n";

// 	// value is updated and
// 	// will be carried to next
// 	// function calls
// 	count++;
// }  

// int main()
// {
// 	for (int i = 0; i < 5; i++)
// 		demo();
// }


/**************** STATIC MEMBER FUNCTION ****************/
class Student {
    static int totalStudents;  // Total number of Students present
    public:
        int roll;
        int age;

        Student() {
            totalStudents ++;
        }

        int getRollNumber () { 
            return roll;
        }
        // Static Fucntion      
        static int getTotalStudents(){
            return totalStudents;
        }
};


int Student :: totalStudents = 0;  // Initialize

int main(){
    // Student s1;
    // s1.totalStudents = 32;
    // cout << s1.roll  << " "<< s1.age << "\n" ;
    // cout << s1.totalStudents << endl; // logically incorrect
    // cout<< Student :: totalStudents << "\n";

    Student s1;
    Student s2;
    Student s3;
    Student s4;

    // cout << Student :: totalStudents <<  "\n"; // 4 if not private
    cout << Student :: getTotalStudents() << "\n";
} 