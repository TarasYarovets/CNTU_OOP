#include <iostream>
#include <student.h>

using namespace std;
int main()
{
    Student Person;
    Person.setName("Vadim");
    Person.setAge(17);
    Person.setMajor("Computer engineering");

    cout << "Person name: " << Person.getName() << endl;
    cout << "Person age: " << Person.getAge() << endl;
    cout << "Person major: " << Person.getMajor() << endl;

    return 0;
}
