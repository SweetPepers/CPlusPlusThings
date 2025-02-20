/*
设计一个堆栈的类模板Stack，在模板中用类型参数T表示栈中存放的数据，用非类型参数MAXSIZE代表栈的大小。
*/
// CRUX
#include<iostream>
using namespace std;

template<class T, int MAXSIZE>
// 定义了模板后  就不存在stack类了,   只有 stack<T, MAXSIZE>类, 使用的时候  声明 Stack<int, 6> s;
class Stack{
    private:
        T elem[MAXSIZE];
        int top;
    public:
        Stack(){top=0;};
        void push(T e);
        T pop();
        bool empty(){
            if (top<=-1)
                return 1;
            else
                return 0;
        }
        void setEmpty(){
            top=-1;
        }
        bool full(){
            if (top>=MAXSIZE-1)
            {
                return 1;
            }
            else
                return 0;
        }
};
/*
原型：
template <模板参数列表> 
返回值类型 类模板名<模板参数名表>::成员函数名 (参数列表){};
*/
//类模板的成员函数的定义 
template<class T, int MAXSIZE>
void Stack<T,MAXSIZE>::push(T e){
    if(full()){
        cout << "stack is full, only support pop" << endl;
        return;
    }
    elem[++top] = e;
}

template<class T, int MAXSIZE>
T Stack<T,MAXSIZE>::pop(){
    if(empty()){
        cout<<"栈已空，不能再弹出元素了！"<<endl;
        return 0;
    }
	return elem[top--];
}


int main(int argc, char const *argv[])
{
    //类模板实例化  
    // 尖括号指定模板
    Stack<int,10>  iStack;      	
    Stack<char,10>  cStack; 
    iStack.setEmpty(); 
    cStack.setEmpty();    	
    cout<<"-------intStack----\n";
    int i;
    for(i=1;i<11;i++) 
        iStack.push(i);
    for(i=1;i<11;i++) cout<<iStack.pop()<<"\t";
    cout<<"\n\n-------charStack----\n";
    cStack.push('A');	cStack.push('B');
    cStack.push('C'); 	cStack.push('D');
    cStack.push('E');
    for(i=1;i<6;i++)  cout<<cStack.pop()<<"\t";
    cout<<endl;
    system("pause");
    return 0;
}