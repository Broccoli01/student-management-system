#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <vector>
#include <map>
#include <memory>
#include <stdexcept>
#include "Student.h"

class StudentManager {
private:
    std::vector<std::shared_ptr<Student>> students;
    std::map<int, std::shared_ptr<Student>> idIndex;

public:
    void addStudent(int id, const std::string& name, int age, const std::string& major);
    void deleteStudent(int id);
    std::shared_ptr<Student> findStudent(int id) const;
    void printAll() const;
};

#endif // STUDENTMANAGER_H