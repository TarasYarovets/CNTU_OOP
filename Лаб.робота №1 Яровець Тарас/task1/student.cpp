#include "student.h"

Student::Student() {}
void Student::setName(string newName)
{
    name = newName;
}

string Student::getName()
{
    return name;
}

void Student::setAge(int newAge)
{
    age = newAge;
}

int Student::getAge()
{
    return age;
}

void Student::setMajor(string newMajor)
{
    major = newMajor;
}

string Student::getMajor()
{
    return major;
}
