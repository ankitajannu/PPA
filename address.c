#include<stdio.h>

int main()
{
    int no = 21;

    printf("Value of no is : %d\n",no);       // 21

    printf("Size of no is : %lu\n",sizeof(no));   // 4
    
    printf("Address of no is : %d\n",&no);    // 100

    return 0;
}