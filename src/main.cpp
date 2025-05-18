/*
==============================================================================
 * @FilePath: main.cpp
 * @Author: WangWindow 1598593280@qq.com
 * @Date: 2025-05-18 11:08:45
 * @LastEditors: WangWindow
 * @LastEditTime: 2025-05-18 13:08:52
 * @2025 by WangWindow, All Rights Reserved.
 * @Descripttion:
==============================================================================
*/

#include <print>

// 待决名：
// 在模板定义中，某些构造的含义可以在不同的实例化之间有所不同，
// 特别是，类型和表达式可能会取决于类型模板形参类型和非类型模板形参的值。

// 绑定规则：非待决名在模板定义点查找并绑定，
// 即使在模板实例化点有更好的匹配，也保持此绑定。

template <class T>
class X {
public:
    void f() {
        std::println("X::f()");
    }
};

template <class T>
class Y : public X<T> {
public:
    void ff() {
        // f(); // 'f' 是非待决名，现在绑定
        // error: there are no arguments to ‘f’ that depend on a template parameter,
        // so a declaration of ‘f’ must be available [-Wtemplate-body]
        // 解决方法：使用this->f()来调用基类的成员函数
        this->f(); // 需要使用this来指明
    }
};

template <class T>
class U {
public:
    using V = const typename T::value; // typename 关键字用于告诉编译器 T::value 是一个类型，而不是静态成员
};

class O {
public:
    using value = int;
};

template <class T>
class S {
public:
    template <class T1>
    void foo() {
    }
};

template <class T>
void bar() {
    S<T> s;
    // s.foo<int>(); // error: '<' 会被解析为小于运算符
    s.template foo<int>(); // 需要使用template来指明
}

auto main() -> int {
    Y<int> y;
    y.ff(); // 调用Y<int>的ff()函数

    U<O>::V u = 12; // -> O::value u

    bar<int>();
}