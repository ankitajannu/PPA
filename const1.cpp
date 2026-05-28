#include<iostream>
using namespace std;

int main()
{
    int No1 = 10;

    const int No2 = 10;

    No1++;  // Allowed
    No2++;  // Not allowed

    No1 = 21;   // Allowed 
    No2 = 21;   // Not allowed
    
    return 0;
}