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

template <template <class T1, class T2, class T3> class S>
class Str {
public:
    S<char, std::char_traits<char>, std::allocator<char>> str;
};

auto main() -> int {
    // std::basic_string 是通用模板
    // std::string 是它的特化
    Str<std::basic_string> s;
    s.str = "hello world";
    std::println("{}", s.str);
}