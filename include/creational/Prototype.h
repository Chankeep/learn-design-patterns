#pragma once

#include <string>

class Sheep {
protected:
    std::string name;
    std::string category;

public:
    // 构造函数
    Sheep(const std::string& name, const std::string& category = "Mountain Sheep")
        : name(name), category(category) {}

    // 拷贝构造函数（用于克隆）
    Sheep(const Sheep& other)
        : name(other.name), category(other.category) {}

    // 设置和获取名字
    void setName(const std::string& name) {
        this->name = name;
    }

    std::string getName() const {
        return name;
    }

    // 设置和获取类别
    void setCategory(const std::string& category) {
        this->category = category;
    }

    std::string getCategory() const {
        return category;
    }

    // 克隆方法
    Sheep* clone() const {
        return new Sheep(*this);
    }

    // 虚析构函数
    virtual ~Sheep() = default;
};
