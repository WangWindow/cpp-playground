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
import std;

template <size_t... args>
class A {
public:
    void f() {
        // 形参包展开
        for (const auto& i : { args... }) {
            std::print("{}", i);
        }
    }
};

template <typename... Args>
void f(Args... args) {
    (
        // 形参包展开
        std::print("{}", args),
        ...); // C++17 折叠表达式
}

template <std::integral... Args>
void f2(Args... args) {
    (std::print("{}", args), ...);
}

template <template <class T1, class T2> class... args>
class B {};

// 示例
template <size_t... args>
void ff() {
    size_t array[sizeof...(args)]{ args... };
    for (const auto& i : array) {
        std::print("{}", i);
    }
}

auto main() -> int {
    A<1, 2, 3, 4, 5> a;
    a.f();

    f(1, 2, 3, 4, "*");
    endl(std::cout);
    // f2(1, 2, 3, 4, "*"); // 需要 std::integral 概念约束

    ff<1, 2, 3, 4, 5>();
}