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

auto main() -> int {
    class std {};

    // std::print("Hello, World!"); // 错误，类 "std" 没有成员 "print"
    ::std::print("Hello, World!"); // 正确，使用全局命名空间的 std::print
}