#include<iostream>
using namespace std;

class Base1
{
    public:
        int i,j;
        Base1()
        {
            cout<<"Inside Base1 constructor\n";
            i = 10;
            j = 20;
        }
        ~Base1()
        {
            cout<<"Inside Base1 destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Fun of Base1\n";
        }
};

class Base2
{
    public:
        int x,y;
        Base2()
        {
            cout<<"Inside Base2 constructor\n";
            x = 30;
            y = 40;
        }
        ~Base2()
        {
            cout<<"Inside Base2 destructor\n";
        }
        void Gun()
        {
            cout<<"Inside Gun of Base2\n";
        }
};

class Derived : public Base2, public Base1
{
    public:
        int a,b;
        Derived()
        {
            cout<<"Inside Derived constructor\n";
            a = 50;
            b = 60;
        }
        ~Derived()
        {
            cout<<"Inside Derived destructor\n";
        }
        void Sun()
        {
            cout<<"Inside Derived Sun\n";
        }
};

int main()
{
    Derived dobj;

    cout<<sizeof(Base1)<<"\n";      // 8
    cout<<sizeof(Base2)<<"\n";      // 8
    cout<<sizeof(Derived)<<"\n";    // 24

    return 0;
}