#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        void Fun()                       // Definition
        {
            cout<<"Inside Base Fun\n";
        }
};

class Derived : public Base
{
    public:
        int x,y;
        void Fun()                       // Redefinition
        {
            cout<<"Inside Derived Fun\n";
        }
};

int main()
{
    Base bobj;
    Derived dobj;
   
    Base *bptr = NULL;
    Derived *dptr = NULL;

    bptr = &bobj;     // Nocasting
    dptr = &dobj;     // Nocasting

    bptr = &dobj;     // Upcasting
    
    dptr = &bobj;     // Downcasting

    return 0;
}