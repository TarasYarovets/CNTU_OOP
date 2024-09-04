#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

struct Student{
    string name;
    int age;
    string major;
};

void setName(Student &student, string &newName);
string getName(Student &student);

void setAge(Student &student, int newAge);
int getAge(Student &student);

void setMajor(Student &student, string &newMajor);
string getMajor(Student &student);

#endif // STUDENT_H
