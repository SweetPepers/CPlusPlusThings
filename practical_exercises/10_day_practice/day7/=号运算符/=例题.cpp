//����ch.cppi
// CRUX   �����е㲻����
#include <iostream>
using namespace std;
class X{
public:
    // x= ������ =x  "=" is on the right of operator
    // ��������Ȼ���ٵ���һ��?
    // ����  ����﷨�ĸ�ʽ��  obj1.operator= (obj2);    ���� obj1 = obj2; <=> obj1.operator= (obj2); �� refer_obj1(obj2)
    // ���ű���Ҳ��һ���������
	X &operator = (const X & x) 
	{cout << "a:"; return *this;};
};
int main ()
{
	X obj1, obj2, obj3;
	obj1 = obj2;           //�������ء�=��
	obj1.operator= (obj2); //�������ء�=��
    
	obj1 = obj2 = obj3;    //�������ء�=��
}
