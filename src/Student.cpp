#include "Student.h"

Student::Student(int id, std::string name, int age, std::string major)
    : id(id), name(std::move(name)), age(age), major(std::move(major)) {}

void Student::print() const {
    std::cout << "ID: " << id << ", Name: " << name
              << ", Age: " << age << ", Major: " << major << "\n";
}