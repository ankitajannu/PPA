#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1, No2;

        Demo(int A, int B)
        {
            No1 = A;
            No2 = B;
        }
};

Demo operator +(Demo op1, Demo op2)
{         // Demo(10+30,20+40)   -> Demo(40,60)
    return Demo(op1.No1+op2.No1, op1.No2+op2.No2);
}

int main()
{
    Demo obj1(10,20);
    Demo obj2(30,40);

    Demo obj3(0,0);
    obj3 = obj1 + obj2;      // +(obj1,obj2);

    cout<<obj3.No1<<"\t"<<obj3.No2<<"\n";

    return 0;
}