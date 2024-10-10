// 我在学习string类 给我一个用不同方式实现增删改查示例
#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";

    // 查（查找）
    size_t found = str.find("World");
    if (found != std::string::npos) {
        std::cout << "Found 'World' at position: " << found << std::endl;
    } else {
        std::cout << "'World' not found" << std::endl;
    }
    // 增（添加）
    str += " Adding more text."; // 在末尾添加
    std::cout << str << std::endl;

    str.insert(5, " Inserted "); // 在指定位置插入
    std::cout << str << std::endl;

    // 改（修改）
    str.replace(str.find("World"), 5, "Everyone"); // 替换第一次出现的"World"为"Everyone"
    std::cout << str << std::endl;

    // 也可以直接使用下标操作符修改单个字符
    str[0] = 'h';
    std::cout << str << std::endl;

    // 删（删除）
    str.erase(str.find("Inserted"), 8); // 删除从"Inserted"开始的8个字符
    std::cout << str << std::endl;

    // 删除从某个位置开始的所有字符
    str.erase(str.find("text"), std::string::npos);
    std::cout << str << std::endl;

    return 0;
}