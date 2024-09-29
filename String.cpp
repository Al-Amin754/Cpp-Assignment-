#include <iostream>
using namespace std;
string getInput() {
    string inputt{};
    cin >> inputt;
    return inputt;
}

int main() {
   string first_val{getInput()};
   string second_val{getInput()};
   string first_char_of_first_value {first_val[0]};
   string second_char_of_first_value {second_val[0]};
   cout << first_val.length() << " " << second_val.length() << '\n';
   cout << first_val+second_val << '\n';
   cout << first_val.replace(0,1,second_char_of_first_value) << " " <<     second_val.replace(0,1,first_char_of_first_value) << '\n';

    return 0;
}