#include <iostream>
using namespace std;
extern "C" { // CRUX extern 还可以修饰文件
    #include "add.h"  
}
int main() {
    add(2,3);
    return 0;
}
