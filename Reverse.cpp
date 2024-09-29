#include<iostream> 
using namespace std;

class ArrayOperations {
public:
    // Function to reverse the array
    void reverseArray(int arr[], int n) {
        int temp = 0;
        for (int i = 0; i < n / 2; i++) {
            // Swap elements
            temp = arr[i];
            arr[i] = arr[n - i - 1];
            arr[n - i - 1] = temp;
        }
    }

    // Function to print the array
    void printArray(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << "\t";
        }
        cout << endl;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    ArrayOperations arrayOps;

    // Reverse and print the array
    arrayOps.reverseArray(arr, n);
    arrayOps.printArray(arr, n);

    return 0;
}
