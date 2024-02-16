#include<iostream>
using namespace std;
float areaOfcircle(float radius) {
    return 3.14 * radius * radius;
}
int main() {
    float radius, area;
    cout <<"Enter the radius of the circle: ";
    cin >>radius;
    area=areaOfcircle(radius);
    cout<<"Area of the circle: "<<area;
    return 0;
}
