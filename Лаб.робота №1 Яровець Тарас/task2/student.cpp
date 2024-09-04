#include "student.h"
void setName(Student &student, const string &newName)
{
    student.name = newName;
}

string getName(const Student &student)
{
    return student.name;
}

void setAge(Student &student, int newAge)
{
    student.age = newAge;
}

int getAge(const Student &student)
{
    return student.age;
}

void setMajor(Student &student, string newMajor)
{
    student.major = newMajor;
}

string getMajor(const Student &student)
{
    return student.major;
}
