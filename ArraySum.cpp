#include <iostream>
using namespace std;

class ArraySum {
public:
    // Pure virtual function
    virtual int calculateSum(int arr[], int size) = 0;
};

class SumCalculator : public ArraySum {
public:
    int calculateSum(int arr[], int size) override {
        int sum = 0;
        for(int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum;
    }
};

int main() {
    SumCalculator calculator;
    int arr[6];
    int size = 6;

    // Input array elements
    cout << "Enter elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Calculate and display sum
    int sum = calculator.calculateSum(arr, size);
    cout << "The addition is: " << sum << endl;

    return 0;
}
