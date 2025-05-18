/*
==============================================================================
 * @FilePath: main.cpp
 * @Author: WangWindow 1598593280@qq.com
 * @Date: 2025-05-18 11:08:45
 * @LastEditors: WangWindow
 * @LastEditTime: 2025-05-18 18:46:36
 * @2025 by WangWindow, All Rights Reserved.
 * @Descripttion:
==============================================================================
*/
import std;

namespace stdr = std::ranges;

auto main() -> int {
    std::array array{ 1, 2, 3, 4, 5 };
    std::copy(array.begin(), array.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    // 使用 范围, 方便使用
    stdr::copy(array, std::ostream_iterator<int>(std::cout, " "));
}