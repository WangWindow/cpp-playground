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

// is_same 是一个模板结构体，用于判断两个类型是否相同。
// 当 T1 和 T2 不同时，value 为 false。
// 通常会通过特化（specialization）来实现当 T1 和 T2 相同时 value 为 true。
template <class T1, class T2>
class is_same {
public:
    static const bool value = false;
};

// 特化版本，用于处理 T1 和 T2 相同的情况。
template <class T>
class is_same<T, T> {
public:
    static const bool value = true;
};

template <class T1, class T2>
bool is_same_v = is_same<T1, T2>::value;

auto main() -> int {
    std::println("{}", is_same_v<int, int>);
    std::println("{}", is_same_v<int, double>);
}