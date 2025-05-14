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

template <class T, class... Args>
void print(T v, Args... args) {
    std::println("{}", v);
    if constexpr ((0 <=> sizeof...(args)) < 0) {
        print(args...);
    }
}

auto main() -> int {
    print("Hello, World!", 1, 2.0, "3", '4');
} 