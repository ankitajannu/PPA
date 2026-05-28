#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[] = "Python";
    char *str = Arr;

    printf("%c\n",*str);    // P
    str++;
    printf("%c\n",*str);    // y
    str++;    
    printf("%c\n",*str);    // t
    str++;
    printf("%c\n",*str);    // h
    str++;   
    printf("%c\n",*str);    // o

    return 0;
}