#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student
{
public:
    Student();

    void setName(string newName);
    string getName();
    void setAge(int newAge);
    int getAge();
    void setMajor(string newMajor);
    string getMajor();
private:
    string name;
    int age;
    string major;
};

#endif // STUDENT_H
