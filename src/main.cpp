#include <iostream>
#include "StudentManager.h"

int main() {
    StudentManager manager;
    
    try {
        // 添加学生
        manager.addStudent(101, "Alice", 20, "Computer Science");
        manager.addStudent(102, "Bob", 21, "Physics");
        manager.addStudent(103, "Charlie", 22, "Mathematics");
        
        // 打印所有学生
        std::cout << "All students:\n";
        manager.printAll();
        
        // 查询学生
        std::cout << "\nFinding student 102:\n";
        if (auto s = manager.findStudent(102)) {
            s->print();
        }
        
        // 删除学生
        std::cout << "\nDeleting student 102:\n";
        manager.deleteStudent(102);
        
        // 再次打印验证
        std::cout << "\nRemaining students:\n";
        manager.printAll();
        
        // 测试异常处理
        std::cout << "\nTesting error handling:\n";
        manager.deleteStudent(999); // 不存在的ID
        
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    return 0;
}