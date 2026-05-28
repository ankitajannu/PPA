#include<iostream>
using namespace std;

class Demo
{
    public:
        int A;
    private:
        int B;
    public:
        Demo()
        {
            A = 11;
            B = 21;
        }
        void Fun()
        {
            cout<<"Value of A : "<<A<<"\n";   // Allowed
            cout<<"Value of B : "<<B<<"\n";   // Allowed
        }
};

int main()
{
    Demo obj;
    obj.Fun();   // Allowed

    cout<<"Value of A : "<<obj.A<<"\n";   // Allowed
    cout<<"Value of B : "<<obj.B<<"\n";   // Not allowed

    return 0;
}
