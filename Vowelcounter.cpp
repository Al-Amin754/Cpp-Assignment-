#include <iostream>
#include <cstring>
using namespace std;

class VowelCounter {
public:
    int vol(const char str[]) {
        int count = 0;
        for(int i = 0; str[i] != '\0'; i++) {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
               str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                count++;
            }
        }
        return count;
    }
};

int main() {
    VowelCounter vc;
    char str[] = "My name is Alamin";
    cout << "The number of vowels is: " << vc.vol(str) << endl;
    return 0;
}
