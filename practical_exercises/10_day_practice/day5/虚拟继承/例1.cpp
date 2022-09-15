#include<iostream>
using namespace std;
class A { 
public:	
	void vf() {
		cout<<"I come from class A"<<endl;	}
};
class B: public A{};
class C: public A{};
class D: public B, public C{};

int main()
{
	D d;
	d.vf ();	// error // B C中都有 vf函数, 然后冲突了, 并且都是同级的, 也就不存在隐藏
    system("pause");
    return 0;
}
