#include<iostream>
using namespace std;

int main()
{
    int Arr[5];            // Static memory

    int *ptr = NULL;

    // Step1 : Allocate the memory
    ptr = new int [5];
    // ptr = (int *)malloc(5 * sizeof(int));

    // Step2 : Use the memory
    // Logic

    // Step3 : Deallocate the memory
    delete []ptr;
    // free(ptr);

    retrun 0;
}