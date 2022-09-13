#include<iostream>

using namespace std;
struct stuff 
{
    unsigned int field1: 30;
    unsigned int       : 2;
    // next bit
    unsigned int field2: 4;
    unsigned int       : 0;  // 0 的话直接占 32位  相当于
    unsigned int field3: 3; 
    unsigned int       : 0;  // 0 的话直接占 32位, 但后面必须有成员才算哈哈  CRUX
    unsigned int field4: 3; 

    
};
struct box {
	unsigned int ready:     2;
	unsigned int error:     2;
	unsigned int command:   4;
	unsigned int sector_no: 24;
    // unsigned int field2: 4;
};
int main(){
    struct stuff s={1,3,5};
    cout<<s.field1<<endl;  //1 
    cout<<s.field2<<endl;  // 3
    cout<<s.field3<<endl;  // 5 
    cout<<sizeof(s)<<endl; // 12
    struct box b = {1,2,3,4};
    cout << sizeof(b) << endl; // 4
    return 0;
}
