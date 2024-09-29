#include<iostream>  
using namespace std;

int main()
{
    // Summation, Subtraction, Multiplication, Division, and Average
    float num1, num2, sum, sub, mul, div, avg;

    cin >> num1 >> num2;
    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    avg = (num1 + num2) / 2;

    cout << "Summation = " << sum << endl;
    cout << "Subtraction = " << sub << endl;
    cout << "Multiplication = " << mul << endl;
    cout << "Division = " << div << endl;
    cout << "Average = " << avg << endl;

    return 0;
}
