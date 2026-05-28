#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p = NULL;

    p = (int *)malloc(5 * sizeof(itn));
    
    free(p);
    
    // Now p is a dangling pointer

    return 0;
}