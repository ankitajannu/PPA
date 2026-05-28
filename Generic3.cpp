#include<iostream>
using namespace std;

float Addition(float No1, float No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    float A = 10.90f, B = 11.60f;

    cout<<Addition(A,B)<<"\n";

    return 0;
}