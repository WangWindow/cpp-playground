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
    X() {
        println("默认构造函数");
    }

    X(const X&) {
        println("拷贝构造函数");
    }

    auto operator=(X&& x) noexcept {
        println("移动赋值运算符");
    }
};

void f(X&& x);
void f1(X&& x);
void f2(X&& x);

void f(X&& x) {
    cout << &x << endl;
    f1(move(x));
}

void f1(X&& x) {
    cout << &x << endl;
    f2(move(x));
}

void f2(X&& x) {
    cout << &x << endl;
}

auto main() -> int {
    X x;
    f(move(x));
}