#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cmath>

// Function to check if a character is an operator
bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

// Function to get the precedence of an operator
int precedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    } else if (op == '*' || op == '/') {
        return 2;
    } else {
        return 0;
    }
}

// Function to perform arithmetic operations
double applyOperator(double a, double b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        default: return 0.0;
    }
}

// Function to evaluate a mathematical expression
double evaluateExpression(const std::string& expression) {
    std::istringstream iss(expression);
    std::stack<double> values;
    std::stack<char> operators;
    char c;
    while (iss >> c) {
        if (isdigit(c)) {
            iss.putback(c);
            double value;
            iss >> value;
            values.push(value);
        } else if (c == '(') {
            operators.push(c);
        } else if (c == ')') {
            while (!operators.empty() && operators.top() != '(') {
                char op = operators.top();
                operators.pop();
                double b = values.top();
                values.pop();
                double a = values.top();
                values.pop();
                values.push(applyOperator(a, b, op));
            }
            operators.pop(); // Remove '('
        } else if (isOperator(c)) {
            while (!operators.empty() && precedence(c) <= precedence(operators.top())) {
                char op = operators.top();
                operators.pop();
                double b = values.top();
                values.pop();
                double a = values.top();
                values.pop();
                values.push(applyOperator(a, b, op));
            }
            operators.push(c);
        }
    }
    while (!operators.empty()) {
        char op = operators.top();
        operators.pop();
        double b = values.top();
        values.pop();
        double a = values.top();
        values.pop();
        values.push(applyOperator(a, b, op));
    }
    return values.top();
}

int main() {
    std::string expression;
    std::cout << "Enter a mathematical expression: ";
    std::getline(std::cin, expression);
    double result = evaluateExpression(expression);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
/*
output:
Enter a mathematical expression: 45+56
Result: 101
*/
