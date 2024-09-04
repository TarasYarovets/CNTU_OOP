#include <iostream>
#include <student.h>
using namespace std;

int main()
{
    Student Person;
    Person.name = "Vadim";
    Person.age = 17;
    Person.major = "Computer engineering";

    cout << "Person name: " << Person.name << endl;
    cout << "Person age: " << Person.age << endl;
    cout << "Person major: " << Person.major << endl;

    return 0;
}
