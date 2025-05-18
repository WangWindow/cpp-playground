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

namespace stdv = std::ranges::views;

auto main() -> int {
    std::array array{ 1, 2, 3, 4, 5 };

    // 先过滤出偶数，再将偶数乘以2
    for (const auto& i :
         array | stdv::filter([](int i) { return i % 2 == 0; }) | stdv::transform([](int i) { return i * 2; })) {
        std::cout << i << ' ';
    }

    std::cout << std::endl;

    int arr[5][5] = {};
    for (int n = 0; auto& i : arr | stdv::join) {
        i = ++n;
    }
    for (const auto& i : arr | stdv::join) {
        std::cout << i << ' ';
    }
}