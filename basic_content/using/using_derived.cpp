/**
 * @file using_derived.cpp
 * @brief 函数重装
 * @author 光城
 * @version v1
 * @date 2019-08-07
 */

#include <iostream>
using namespace std;

class Base{
    public:
        void f(){ cout<<"f()"<<endl;
        }
        void f(int n){
            cout<<"Base::f(int)"<<endl;
        }
};

// CRUX

/*
重载: 
同一作用域
函数名相同
参数不同

覆盖: virtual重写, 参数相同(不同就变成隐藏了)

隐藏: 类似覆盖, 但是没有关键字  virtual
- 如果派生类的函数与基类的函数名相同，但是参数不同。此时，不论有无virtual关键字。此时，基类函数会被隐藏
- 如果派生类的函数与基类的函数同名，并且参数也相同，但是基类函数没有virtual
*/

class Derived : private Base {
    public:
        using Base::f; 
        // CRUX  重写的算自己的 
        // 在派生类中使用using声明语句指定一个名字而不指定形参列表，所以一条基类成员函数的using声明语句就可以把该函数的所有重载实例添加到派生类的作用域中。此时，派生类只需要定义其特有的函数就行了，而无需为继承而来的其他函数重新定义。
        
        // 这个叫隐藏 但是覆盖必须要求virtual关键字  确实必须有 virtual
        void f(int n){
            cout<<"Derived::f(int)"<<endl;
        }
};


int main()
{
    Base b;
    Derived d;
    d.f();
    d.f(1);
    return 0;
}
