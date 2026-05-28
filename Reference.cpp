#include<iostream>
using namespace std;

int main()
{
    int no = 11;
    int &X = no;

    cout<<no<<"\n";       // 11
    cout<<X<<"\n";        // 11

    cout<<&no<<"\n";      // 100
    cout<<&X<<"\n";       // 100      

    return 0;
}