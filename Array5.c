#include<stdio.h>

int main()
{
    int Arr[4] = {10,20,30,40};

    printf("%d\n",Arr[0]);     // 01
    printf("%d\n",Arr[1]);     // 20
    printf("%d\n",Arr[2]);     // 30 
    printf("%d\n",Arr[3]);     // 40

    printf("%lu\n",sizeof(Arr));      // 16
    printf("%lu\n",sizeof(Arr[0]));   // 4
    printf("%lu\n",sizeof(Arr[2]));   // 4

    printf("%d\n",Arr);      // 100
    printf("%d\n",&Arr);     // 100
    printf("%d\n",&Arr[0]);  // 100
    printf("%d\n",&Arr[2]);  // 108
    printf("%d\n",&Arr[3]);  // 112

    return 0;
}