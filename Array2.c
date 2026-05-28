#include<stdio.h>

int main()
{
    int Price[] = {67,86,45,88,90,34};

    printf("%d\n",Price[0]);    // 67
    printf("%d\n",Price[2]);    // 45
    printf("%d\n",Price[5]);    // 34

    printf("%lu\n",sizeof(Price));       // 24
    printf("%lu\n",sizeof(Price[1]));    // 4
    printf("%lu\n",sizeof(Price[3]));    // 4

    return 0;
}