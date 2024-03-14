#include <iostream>
using namespace std;

// Complex number class
class ComplexNumber {
private:
    double real, imag;

public:
    // Constructor
    ComplexNumber(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Overloaded addition operator
    ComplexNumber operator+(const ComplexNumber& other) const {
        return ComplexNumber(real + other.real, imag + other.imag);
    }

    // Overloaded subtraction operator
    ComplexNumber operator-(const ComplexNumber& other) const {
        return ComplexNumber(real - other.real, imag - other.imag);
    }

    // Friend function to overload the output stream operator
    friend ostream& operator<<(ostream& out, const ComplexNumber& c);
};

// Overloaded output stream operator
ostream& operator<<(ostream& out, const ComplexNumber& c) {
    out << c.real << (c.imag >= 0 ? "+" : "") << c.imag << "i";
    return out;
}

int main() {
    ComplexNumber c1(3.0, 4.0);
    ComplexNumber c2(1.0, -2.0);

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;

    ComplexNumber c3 = c1 + c2;
    cout << "c1 + c2 = " << c3 << endl;

    ComplexNumber c4 = c1 - c2;
    cout << "c1 - c2 = " << c4 << endl;

    return 0;
}
/*
output:
c1 = 3+4i
c2 = 1-2i
c1 + c2 = 4+2i
c1 - c2 = 2+6i
*/
