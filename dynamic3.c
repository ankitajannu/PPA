#include<stdio.h>         //andard input output
#include<stdlib.h>        //standard library

int main()
{
    int *ptr = NULL;
    
    // Step 1 : Allocate the memory
    ptr = (int *)calloc(5, sizeof(int));

    // Step 2 : Use the memory

    // Step 3 : Deallocte the memory
    free(ptr);

    return 0;
}