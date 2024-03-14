#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double PI = 3.14159265358979323846; // Constant value of pi
    double radius, volume;

    // Prompt the user to enter the radius
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    // Calculate the volume of the sphere
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    // Display the calculated volume
    cout << "The volume of the sphere with radius " << radius << " is: " << volume << endl;

    return 0;
}
/*
output:
Enter the radius of the sphere: 7
The volume of the sphere with radius 7 is: 1436.76
*/
