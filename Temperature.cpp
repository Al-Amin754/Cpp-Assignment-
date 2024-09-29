#include<iostream>  // for input/output operations
using namespace std;

int main()
{
    // Celsius to Fahrenheit
    int C, sum;
    cout << "Enter Celsius temperature: ";
    cin >> C;
    sum = ((C * 9) / 5) + 32;
    cout << "The Fahrenheit equivalent is: " << sum << endl;

    // Kelvin to Celsius
    float K, sum2;
    cout << "Enter Kelvin temperature: ";
    cin >> K;
    sum2 = (K - 273.15);
    cout << "The Celsius equivalent is: " << sum2 << endl;

    return 0;
}
