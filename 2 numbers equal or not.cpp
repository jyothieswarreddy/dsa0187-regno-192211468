#include <iostream>
using namespace std;
int main() {
	int num1,num2;
	cout << "enter the first number: ";
	cin >> num1;
	cout << "enter the second number:";
	cin >> num2;
	if(num1==num2){
		cout<<"the numbers are equal."<< endl;
	} else {
		cout << "the numbers are not equal."<<endl;
	}
	return 0;
}
/*
output:
enter the first number: 8
enter the second number:8
the numbers are equal.
*/
