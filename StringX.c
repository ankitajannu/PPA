#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[] = "Python";

    printf("Length of string is : %d\n",strlen(Arr));   // 6
    printf("Size of string is : %d\n",sizeof(Arr));     // 7

    printf("%c\n",Arr[3]);   // h
    printf("%c\n",Arr[5]);   // n
    printf("%c\n",Arr[1]);   // y

    return 0;
}