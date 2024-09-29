#include <iostream>
#include <string>
#include <exception>

using namespace std;


class BadLengthException : public exception {
private:
    int length;
public:

    BadLengthException(int n) : length(n) {}


    const char* what() const noexcept override {

        return to_string(length).c_str();
    }


    int getLength() const {
        return length;
    }
};


bool checkUsername(string username) {
    int n = username.length();
    if(n < 5) {

        throw BadLengthException(n);
    }

    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string username;
        cin >> username;

        try {
            if (checkUsername(username)) {
                cout << "Valid" << endl;
            }
        } catch (BadLengthException& e) {

            cout << "Too short: " << e.getLength() << endl;
        } catch (...) {

            cout << "Invalid" << endl;
        }
    }

    return 0;
}