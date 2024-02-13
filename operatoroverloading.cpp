#include<iostream>
using namespace std;

class Complex {
private:
    double real, imag;

public:

    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

   
    Complex operator +(Complex const &obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }
     void print(){
        cout << real <<"+" << imag << "i"<< endl;

    }
    
};


int main() {
    Complex c1(5, 6), c2(2, 3), c3;

    cout << "First Complex number: ";
    c1.print();

    cout << "Second Complex number: ";
    c2.print();

    c3 = c1 + c2;
    cout << "Result after addition: ";
    c3.print();

      std::cout << "Programmer : Sandeep kumar" << std::endl;
    return 0;
}