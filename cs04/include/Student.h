#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    std::string name; // 公共属性，存储学生的姓名

    // 构造函数声明
    Student(const std::string& name);

    // 方法声明
    void display();
};

#endif // STUDENT_H
