#include <iostream>
using namespace std;
float celsiustofahrenheit(float celsius) {
    return (celsius * 9.0) / 5.0 + 32;
}
int main() {
    float celsius, fahrenheit;
    cout<<"enter the temperature in celsius: ";
    cin>>celsius;
    fahrenheit = celsiustofahrenheit(celsius);
    cout <<"the temperature in fahrenheit: " <<fahrenheit;
    return 0;
}
