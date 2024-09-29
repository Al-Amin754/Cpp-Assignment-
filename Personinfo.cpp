#include<iostream>   // For input/output operations
#include<string>     // For using strings in C++

using namespace std;

// Defining the structure 'Address'
struct Address {
    int house;
    int block;
    string city;
    string state;
};

// Function declaration to print address
void printAddress(const Address& add);

int main() {
    Address adds[3];  // Creating an array of Address structures

    // Inputting data for each address
    for(int i = 0; i < 3; i++) {
        cout << "Enter info for person " << i + 1 << ":\n";
        cin >> adds[i].house >> adds[i].block >> adds[i].city >> adds[i].state;
    }

    // Outputting the addresses
    for(int i = 0; i < 3; i++) {
        printAddress(adds[i]);
    }

    return 0;
}

// Function to print the address
void printAddress(const Address& add) {
    cout << "Address is: " << add.house << ", " << add.block << ", " 
         << add.city << ", " << add.state << endl;
}
