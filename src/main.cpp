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
using namespace std;

class X {
public:
    X(int) = delete;
};

auto main() -> int {
    X x(1); // error: use of deleted function 'X::X(int)'
}