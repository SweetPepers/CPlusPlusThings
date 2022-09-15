//例题ch.cppi
// CRUX   还是有点不明白
#include <iostream>
using namespace std;
class X{
public:
    // x= 而不是 =x  "=" is on the right of operator
    // 返回引用然后再等于一次?
    // 不对  这个语法的格式是  obj1.operator= (obj2);    就是 obj1 = obj2; <=> obj1.operator= (obj2); 即 refer_obj1(obj2)
    // 括号本身也是一个构造语句
	X &operator = (const X & x) 
	{cout << "a:"; return *this;};
};
int main ()
{
	X obj1, obj2, obj3;
	obj1 = obj2;           //调用重载“=”
	obj1.operator= (obj2); //调用重载“=”
    
	obj1 = obj2 = obj3;    //调用重载“=”
}
