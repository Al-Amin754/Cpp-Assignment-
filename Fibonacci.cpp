#include<iostream>  
using namespace std;

class FibonacciBase {
public:
    int fib(int n) {
        if (n <= 1)
            return n;
        else
            return fib(n - 1) + fib(n - 2);
    }
};

class FibonacciSeries : public FibonacciBase {
public:
    void displaySeries(int n) {
        cout << "Fibonacci series: ";
        for (int i = 0; i < n; i++) {
            cout << fib(i) << "\t";
        }
        cout << endl;
    }
};

int main() {
    int n;
    
    FibonacciSeries fibObj;

    cout << "Enter the number of terms in the series: ";
    cin >> n;

    fibObj.displaySeries(n);

    return 0;
}
