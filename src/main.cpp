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

template <class... Ts>
class Overload : public Ts... {
public:
    using Ts::operator()...;
};
// 形参列表可以被继承

auto main() -> int {
    auto a = Overload{ [](int arg) { std::println("int: {}", arg); },
                       [](double arg) { std::println("double: {}", arg); },
                       [](auto arg) { std::println("auto: {}", arg); } };

    a(1);
    a(1.0);
    a("hello");
}