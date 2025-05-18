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

class T {
public:
    template <class... Args>
    auto operator[](Args&&... args) {
        ((std::println("{}", args)), ...); // Fold expression to print all arguments
        // std::println("args: {}", args); // This will not work as args is a pack
    }

    auto operator[](size_t size) {
        std::println("size: {}", size);
    }

    template <class T>
    auto operator[](std::initializer_list<T> init_list) {
        for (const auto& item : init_list) {
            std::println("item: {}", item);
        }
    }
};

auto main() -> int {
    T t;
    t["**", 1, 2, 3];
    t[5];
    t[{ 1, 2, 3, 4, 5 }];
    t[{ "*", "**", "😋" }];
}