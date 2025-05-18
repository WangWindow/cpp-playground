/*
==============================================================================
 * @FilePath: main.cpp
 * @Author: WangWindow 1598593280@qq.com
 * @Date: 2025-05-10 20:36:11
 * @LastEditors: WangWindow
 * @LastEditTime: 2025-05-18 18:46:36
 * @2025 by WangWindow, All Rights Reserved.
 * @Descripttion:
==============================================================================
*/

import std;

// 'concept' 是 C++20 中引入的一个新特性，用于定义类型约束
// 下面的代码定义了一个名为 'is_int' 的概念，它检查一个类型是否是 'int'
template <class T>
concept is_int = std::is_same_v<T, int>;

void test(is_int auto a) {
    std::println("is int");
}

// 这段代码与上面的等价
template <is_int T>
void test_1(T a) {
    std::println("is int");
}

// 约束表达式支持使用 '&&' 和 '||' 进行组合，以实现更复杂的约束

// ‘require’ 只需要能通过编译就可以了
template <class T>
concept Test = requires(T a, T b) {
    { a + b } -> is_int; // 复合约束
};

template <class T>
void test_2(T a)
    requires Test<T>
{
    std::println("is int");
}

auto main() -> int {
    test(1);   // 传入一个 int 类型的参数
    test_1(1); // 传入一个 int 类型的参数
    test_2(1); // 传入一个 int 类型的参数
    // test(1.0); // 传入一个 double 类型的参数，这行代码会导致编译错误，因为它不满足 is_int 的约束
}