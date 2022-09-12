/**
 * @file first_example.cpp
 * @brief 虚函数中默认参数
 * 规则：虚函数是动态绑定的，默认参数是静态绑定的。默认参数的使用需要看指针或者应用本身的类型，而不是对象的类型！
 * @author 光城
 * @version v1
 * @date 2019-07-24
 */

#include <iostream> 
using namespace std; 

class Base 
{ 
    public: 
        virtual void fun ( int x = 10 ) 
        { 
            cout << "Base::fun(), x = " << x << endl; 
        } 
}; 

class Derived : public Base 
{ 
    public: 
        virtual void fun ( int x=20 ) 
        { 
            cout << "Derived::fun(), x = " << x << endl; 
        } 
}; 


int main() 
{ 
    // 虚函数是动态绑定的  也就是绑定指针内容指向的位置
    // 虚函数绑定 Derived  
    Derived d1; // Derived::fun(), x = 20
    d1.fun();
    // 默认参数绑定  指针 *bp
    Base *bp = &d1; 
    bp->fun();  // 10  // Derived::fun(), x = 10
    return 0; 
} 

// int main() 
// { 
//     Derived d1; 
//     Base &bp = d1; 
//     bp.fun();  // 10
//     return 0; 
// } 


