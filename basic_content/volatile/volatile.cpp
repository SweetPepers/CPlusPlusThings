/* Compile code with optimization option */
#include <stdio.h> 

int main(void) 
{ 
    const volatile int local = 10; 
    int *ptr = (int*) &local; 

    printf("Initial value of local : %d \n", local); 

    *ptr = 100; 

    printf("Modified value of local: %d \n", local); 

    return 0; 
} 
//   volatile的意思是让编译器每次操作该变量时一定要从内存中真正取出，而不是使用已经存在寄存器中的值。