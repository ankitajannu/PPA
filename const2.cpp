#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1, No2;
        const int No3 = 30;
        const int No4 = 40;

        Demo() : No3(30), No4(40)
        { 
            No1 = 10;
            No2 = 20;
        }   

        Demo(int A, int B, int C, int D) : No3(C), No4(D)
        { 
            No1 = A;
            No2 = B;
        } 
};

int main()
{
    Demo obj1;
    cout<<obj1.No1<<"\t"<<obj1.No2<<"\t"<<obj1.No3<<"\t"<<obj1.No4<<"\t";

    Demo obj2(11,21,51,101);
    cout<<obj2.No1<<"\t"<<obj2.No2<<"\t"<<obj2.No3<<"\t"<<obj2.No4<<"\t";

    obj1.No1++;
    obj1.No2++;
    // obj1.No3++;
    // obj4.No4++;

    return 0;
}