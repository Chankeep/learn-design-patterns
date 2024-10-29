/*
 * In software engineering, the singleton pattern is a software design pattern that
 * restricts the instantiation of a class to one object. This is useful when exactly
 * one object is needed to coordinate actions across the system.
 */

#pragma once


// Lazy Initialization
class LazySingleton {
public:
    LazySingleton(const LazySingleton &) = delete;

    LazySingleton &operator=(const LazySingleton &) = delete;

    static LazySingleton *getInstance() {
        if (instance == nullptr) {
            instance = new LazySingleton();
        }
        return instance;
    }

private:
    LazySingleton() {}

    static LazySingleton *instance;
};

// Eager Initialization
class EagerSingleton {
public:
    EagerSingleton(const EagerSingleton &) = delete;

    EagerSingleton &operator=(const EagerSingleton &) = delete;

    static EagerSingleton *getInstance() {
        return instance;
    }

private:
    EagerSingleton() {}

    static EagerSingleton *instance;
};

EagerSingleton *EagerSingleton::instance = new EagerSingleton();

// Meyer's MeyerSingleton
// Take advantage of the feature provided by C++11 and later standards
// that the initialisation of local static variables is thread-safe.

class MeyerSingleton {
private:
    // 私有构造函数防止外部创建对象
    MeyerSingleton() {}

public:
    // 删除拷贝构造函数和赋值操作符
    MeyerSingleton(const MeyerSingleton&) = delete;
    MeyerSingleton& operator=(const MeyerSingleton&) = delete;

    // 提供全局访问点
    static MeyerSingleton& getInstance() {
        static MeyerSingleton instance; // C++11起，局部静态变量是线程安全的
        return instance;
    }

    // 清理资源
    ~MeyerSingleton() {}
};