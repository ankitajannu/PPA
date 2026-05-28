#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[] = {'H','e','l','l','o','\0'};

    char Brr[] = "Hello";

    printf("%d\n",sizeof(Arr));   // 6
    printf("%d\n",sizeof(Brr));   // 6

    
    printf("Length of string is : %d\n",strlen(Arr)); // 5
    printf("Length of string is : %d\n",strlen(Brr)); // 5

    return 0;
} 