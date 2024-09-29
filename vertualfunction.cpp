#include <iostream>
#include <string>
using namespace std;
class person
{
protected:
    string name;
    int age;

public:
    person(string n, int a)
    {
        name = n;
        age = a;
    }
    virtual void displayinfo()
    {
        cout << "Name of the student :" << name << endl;
        cout << "Age of the student :" << age << endl;
    }
};
class student : public person
{
private:
    int studentid;

public:
    student(string name, int age, int si) : person(name, age)
    {
        studentid = si;
    }
    void displayinfo() override
    {
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
        cout << "the id is :" << studentid << endl;
    }
};
int main()
{
    student s1("al-amin", 22, 20202020);
    s1.displayinfo();
    return 0;
}