#include <iostream>  
using namespace std;

void printArray(int size, int a[]) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

void bubbleSort(int size, int a[]) {
    int temp;
    bool swapped = false;

    for (int i = 0; i < size - 1; i++) {
        swapped = false;

        for (int j = 0; j < size - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                // Swap the elements
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }

    printArray(size, a);
}

int main() {
    int a[] = {14, 5, 10, 3, 9, 5, 8};
    int size = sizeof(a) / sizeof(a[0]);

    cout << "Array size is: " << size << endl;
    bubbleSort(size, a);

    return 0;
}
