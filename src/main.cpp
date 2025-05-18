/*
==============================================================================
 * @FilePath: main.cpp
 * @Author: WangWindow 1598593280@qq.com
 * @Date: 2025-05-10 20:36:11
 * @LastEditors: WangWindow
 * @LastEditTime: 2025-05-11 18:41:43
 * @2025 by WangWindow, All Rights Reserved.
 * @Descripttion:
==============================================================================
*/
#include <iostream>
#include <print>

// 模板
template <class T>
class X {
public:
    void f() {
        std::println("X<T>::f()");
    }
};

// 模板特化
template <>
class X<double> {
public:
    void f(int) {
        std::println("X<double>::f(int)");
    }
};

// 偏特化
template <class T>
class X<T*> {
public:
    void f(double) {
        std::println("X<T*>::f(double)");
    }
};

auto main() -> int {
    X<int> x;
    x.f(); // error: 没有匹配的函数调用 'X<int>::f()'
    // x.f(1.0); // error: 没有匹配的函数调用 'X<int>::f(double)'
    // x.f("hello"); // error: 没有匹配的函数调用 'X<int>::f(const char*)'
}