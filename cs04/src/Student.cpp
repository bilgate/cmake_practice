#include <iostream>
#include "../include/Student.h"

// 构造函数定义
Student::Student(const std::string& name) : name(name) {}

// 方法定义
void Student::display() {
    std::cout << "Student's name: " << name << std::endl;
}
