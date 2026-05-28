#include<iostream>
using namespace std;

void Display(int A = 10, int B = 20, int C = 30)
{
    cout<<A<<"\t"<<B<<"\t"<<C<<"\n";
}
int main()
{
    Display();           // 10   20   30
    Display(11);         // 11   20   30
    Display(11,21);      // 11   21   30
    Display(11,21,51);   // 11   21   51

    return 0;
}