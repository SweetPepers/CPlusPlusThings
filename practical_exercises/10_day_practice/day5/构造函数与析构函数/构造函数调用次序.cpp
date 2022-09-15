//Eg6-12.cpp
#include <iostream>
using namespace std;
class A {
    int x;
public:
     A(int i=0) {
         x=i;
         cout << "A-----"<<x<<endl;
     }
};
class B {
    int y;
public:
    B(int i) {
        y=i;
        cout << "B-----"<<y<<endl;
    } 
}; 
class C {
    int z;
public:
    C(int i) {
        z=i;
        cout << "C-----"<<z<<endl;
    } 
};

// 按照声明顺序构造, 最后构造自己
class D : public B{
public: 
    C c1, c2;
    A *a1 = new A(10);
    A a0,a4;
    D( ) : a4(4),c2(2),B(1), c1(1) {
cout << "D-----5"<<endl;
    }
};
int main(){
    D d;
    // system("pause");
}
