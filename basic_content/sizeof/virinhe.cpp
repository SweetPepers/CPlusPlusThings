/**
 * @file virnhe.cpp
 * @brief 虚继承
 * @author 光城
 * @version v1
 * @date 2019-07-21
 */

#include<iostream>
// TODO  : 大小搞錯了
using namespace std;

// class A  // 8
// {

//     virtual void fun() {}
// };

// class B // 8
// {
//     virtual void fun2() {}
// };
// class C : virtual public  A, virtual public B
// {
//     public:
//         virtual void fun3() {}
// };


// int main()
// {

//     /**
//      * 
//      * 
//      * 虚继承的时候子类会有一个指向自己虚函数表的指针，同时也会加入一个指向父类的虚类指针，然后还要包含父类的所有内容
//      * @brief 8 8 16  派生类虚继承多个虚函数，会继承所有虚函数的vptr
//      */
//     cout<<sizeof(A)<<" "<<sizeof(B)<<" "<<sizeof(C);

//     return 0;
// }

class A 
{
public:
    virtual void aa(){};
};

class B:public virtual A
{
    int j;
public:
    virtual void bb(){};
};

class C:public virtual B
{
    int i;
public:
    virtual void cc(){};
};

// 8 16 32   CRUX TODO  why???
int main()
{
    cout << sizeof(A) << endl;
    cout << sizeof(B) << endl;
    cout << sizeof(C) << endl;
    return 0;
}
