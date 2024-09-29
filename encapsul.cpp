#include<iostream>
using namespace std;
class Person {
private:
	string name;
	int age;
public:
	Person(string n, int a) {
	name = n;
	age = a;
	}
	void display(){
	cout<<"the name of the person is: "<<name<<endl;
	cout<<"the age of the person is:  "<<age<<endl;
	}

};

int main() {
Person p("John Doe", 30);
p.display();

return 0;
}

