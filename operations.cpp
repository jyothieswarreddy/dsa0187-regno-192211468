#include <iostream>
using namespace std;
int main() {
    int first, second, add, subtract, multiply, divide, modulo;
    cout << "Please enter two integers: ";
    cin >> first >> second;
    add = first + second;
    subtract=first - second;
    multiply=first * second;
    divide=first / second;
    modulo=first % second;
    cout<<"Sum = " << add << endl;
    cout<<"Difference = " << subtract << endl;
    cout<<"Multiplication = " << multiply << endl;
    cout<<"Division = " << divide << endl;
    cout<<"Modulo = " << modulo << endl;
    return 0;
}
/*
output:
Please enter two integers: 9
6
Sum = 15
Difference = 3
Multiplication = 54
Division = 1
Modulo = 3
*/
