#include<iostream>
using namespace std;

class Base
{
    public:
        void Fun()                       // Definition
        {
            cout<<"Inside Base Fun\n";
        }
};

class Derived : public Base
{
    public:
        void Fun()                       // Redefinition
        {
            cout<<"Inside Derived Fun\n";
        }
};

int main()
{
    cout<<sizeof(Base)<<"\n";        // 1 byte
    Base bobj;
    bobj.Fun();

    Derived dobj;
    dobj.Fun();


    return 0;
}