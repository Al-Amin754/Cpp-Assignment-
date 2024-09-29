#include <iostream>
#include <string>
using namespace std;
// Base class (abstraction)
class DoorLock {
protected:
    string name;
    bool isLocked;
public:
    DoorLock(string n) : name(n), isLocked(true) {}
    virtual void unlock() = 0; // Abstract method
    void lock() {
        isLocked = true;
        cout << name << " locked.\n";
    }
    string getStatus() {
        return isLocked ? name + " is locked." : name + " is unlocked.";
    }
};
// Derived class for Fingerprint lock
class FingerprintLock : public DoorLock {
    string fingerprint;
public:
    FingerprintLock(string n, string fp) : DoorLock(n), fingerprint(fp) {}
    void unlock() override {
        string input;
        cout << "Enter fingerprint: "; cin >> input;
        isLocked = (input == fingerprint) ? false : true;
        cout << (isLocked ? "Unauthorized access!\n" : name + " unlocked.\n");
    }
};
// Derived class for Password lock
class PasswordLock : public DoorLock {
    string password;
public:
    PasswordLock(string n, string pwd) : DoorLock(n), password(pwd) {}
    void unlock() override {
        string input;
        cout << "Enter password: "; cin >> input;
        isLocked = (input == password) ? false : true;
        cout << (isLocked ? "Incorrect password!\n" : name + " unlocked.\n");
    }
};
// Main function
int main() {
    FingerprintLock fLock("Front Door", "1234F");
    PasswordLock pLock("Back Door", "pass123");

    fLock.unlock();
    pLock.unlock();

    cout << fLock.getStatus() << endl;
    cout << pLock.getStatus() << endl;

    fLock.lock();
    pLock.lock();

    return 0;
}
