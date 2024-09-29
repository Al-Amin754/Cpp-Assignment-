#include <iostream>
#include <cmath>
using namespace std;

void calculator(int a, int b, char opt);

int main() {
    char opt;
    cout << "Select an operator (+, -, /, *): " << endl;
    cin >> opt;
    
    int a, b;
    cout << "Enter first value: ";
    cin >> a;
    cout << "Enter second value: ";
    cin >> b;
    
    calculator(a, b, opt);
    return 0;
}

void calculator(int a, int b, char opt) {
    float result;
    
    switch (opt) {
        case '+':
            result = a + b;
            cout << "Summation of " << a << " and " << b << " is: " << result << endl;
            break;
        case '-':
            result = a - b;
            cout << "Subtraction of " << a << " and " << b << " is: " << result << endl;
            break;
        case '*':
            result = a * b;
            cout << "Multiplication of " << a << " and " << b << " is: " << result << endl;
            break;
        case '/':
            if (b != 0) {
                result = static_cast<float>(a) / b;
                cout << "Division of " << a << " and " << b << " is: " << result << endl;
            } else {
                cout << "Error! Division by zero." << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
}
