#include <iostream>
using namespace std;
class Fraction {
    private:
        int num;
        int den;
    public:
        Fraction(int num, int den) {   // Prohibits to store Garbage Value
            this->num = num;
            this->den = den;
        }
        void print(){
            cout << this->num <<  "/" << this->den << "\n";
        }

        void simplify () {
            int gcd = 1;
            int j = min(this->num, this->den);
            for(int i{1}; i <= j; ++i){
                if(this->num%i == 0 && this->den%i == 0){
                    gcd = i;
                }
            }
            this->num = this->num/gcd;
            this->den = this->den/gcd;
        }
        // f1 = f1 + f2
        // void add(Fraction f2) {  // Copy Constructor
                                 // Fraction f2 = main.f2; which means we are copying main object f2 into this object
        void add(Fraction const &f2) {   // so this will avoid copy creation
            int lcm = den * f2.den;
            int x = lcm / den;
            int y = lcm / f2.den;

            int num = x*num + (y*f2.num);
            num = num;
            den = den;
            simplify(); // this will be called on f1
        }

        void multiply(Fraction const &f2) { // update the value of multiplication in f1
            this->num = this->num * f2.num;
            this->den = this->den * f2.den;
            simplify();
        }
};

int main() {
    Fraction f1(10,2);
    Fraction f2(15,4);
    // f1.add(f2);
    // f1.print();
    // f2.print();

    f1.multiply(f2);
    f1.print();
    f2.print();
}