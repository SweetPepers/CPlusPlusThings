/**
 * @file rtti.cpp
 * @brief 在面向对象程序设计中，有时我们需要在运行时查询一个对象是否能作为某种多态类型使用。与Java的instanceof，以及C#的as、is运算符类似，C++提供了dynamic_cast函数用于动态转型。相比C风格的强制类型转换和C++ reinterpret_cast，dynamic_cast提供了类型安全检查，是一种基于能力查询(Capability Query)的转换，所以在多态类型间进行转换更提倡采用dynamic_cast
 * @author 光城
 * @version v1
 * @date 2019-07-24
 */

// CPP program to illustrate  
// // Run Time Type Identification  
#include<iostream>
#include<typeinfo>
using namespace std; 
class B { 
public:
  virtual void fun() {
    cout << "bbbb" << endl;
  } 
}; 
class D: public B { 
  public:
    void fun(){
      cout << "dddd" <<endl;
    }
}; 

int main() 
{ 
    // 转过来  看看能不能再转回去, 给转回去提供一个机会, 而不是直接把 B  转换为 D
    // 是把 D转过来的B再转会D
    B *b = new D;  // 向上转型
    B &obj = *b;
    // CRUX dynamic_cast
    D *d = dynamic_cast<D*>(b);   // 向下转型
    if(d != NULL) 
        cout << "works"<<endl; 
    else
        cout << "cannot cast B* to D*"; 
 
    try {
        D& dobj = dynamic_cast<D&>(obj);  
        cout << "works"<<endl; 
    } catch (bad_cast bc) { // ERROR
        cout<<bc.what()<<endl;
    }
    // 虚函数还是看指针指向的内容决定  编译器管不了的哈哈哈哈
    b->fun();
    d->fun();
    return 0;
}
