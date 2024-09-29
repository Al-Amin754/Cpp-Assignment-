#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int q;
    cin >> q; 

    map<string, int> student_marks; 

    for (int i = 0; i < q; i++) {
        int query_type;
        string name;
        cin >> query_type >> name; 

        if (query_type == 1) {
            int marks;
            cin >> marks;
            
            student_marks[name] += marks;
        } 
        else if (query_type == 2) {
       
            student_marks[name] = 0;
        } 
        else if (query_type == 3) {
            
            cout << student_marks[name] << endl;
        }
    }

    return 0;
}