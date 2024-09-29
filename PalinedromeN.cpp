#include <iostream>
using namespace std;

// Abstract class
class PalindromeChecker {
public:
    // Pure virtual function
    virtual bool isPalindrome(int a) = 0;

    void displayResult(int a) {
        if (isPalindrome(a)) {
            cout << a << " is a palindrome number." << endl;
        } else {
            cout << a << " is not a palindrome number." << endl;
        }
    }
};

class Palindrome : public PalindromeChecker {
public:
    bool isPalindrome(int a) override {
        int rem, n, temp, sum = 0;
        n = a;
        temp = n;

        while (n > 0) {
            rem = n % 10;
            sum = (sum * 10) + rem;
            n = n / 10;
        }
        return (temp == sum);
    }
};

int main() {
    int a;
    cout << "Enter a value: ";
    cin >> a;

    Palindrome palindrome;
    palindrome.displayResult(a);

    return 0;
}
