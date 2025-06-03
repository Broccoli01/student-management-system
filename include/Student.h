#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
public:
    int id;
    std::string name;
    int age;
    std::string major;

    Student(int id, std::string name, int age, std::string major);
    void print() const;
};

#endif // STUDENT_H