#include <iostream>
using namespace std;
class Point{
protected:
    int x,y;
public:
    Point(int a,int b=0) {
        x=a;  y=b;
        cout<<"constructing point("<<x<<","<<y<<")"<<endl;
    }
};
class Line:public Point{
protected:
    int len;
public:
    Line(int a,int b,int l):Point(a,b) {	//构造函数初始化列表
        len=l;
        cout<<"Constructing Line,len ..."<<len<<endl;
    }
};
int main(){
    Line L1(1,2,3);
}

// 相当于在里面声明了, 没有重复构造
// p 1 2 p 1 2 line 3  X
// p 1 2 line 3
