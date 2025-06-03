#include "StudentManager.h"
#include <algorithm>

void StudentManager::addStudent(int id, const std::string& name, int age, const std::string& major) {
    if (idIndex.find(id) != idIndex.end()) {
        throw std::invalid_argument("Student ID already exists");
    }
    
    auto newStudent = std::make_shared<Student>(id, name, age, major);
    students.push_back(newStudent);
    idIndex[id] = newStudent;
}

void StudentManager::deleteStudent(int id) {
    auto it = idIndex.find(id);
    if (it == idIndex.end()) {
        throw std::invalid_argument("Student ID not found");
    }
    
    // 从vector中移除
    auto& ptr = it->second;
    auto new_end = std::remove_if(students.begin(),students.end(),[&](const std::shared_ptr<Student> &p){return p == ptr;});
    students.erase(new_end,students.end());
    
    // 从map中移除
    idIndex.erase(it);
}

std::shared_ptr<Student> StudentManager::findStudent(int id) const {
    auto it = idIndex.find(id);
    if (it != idIndex.end()) {
        return it->second;
    }
    return nullptr;
}

void StudentManager::printAll() const {
    for (const auto& student : students) {
        student->print();
    }
}