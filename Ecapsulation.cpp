#include<iostream>
using namespace std;

class Demo
{
    public:
       int A;
       int B;

        void Fun()
        {
            cout<<"Inside Fun\n";
        }

        void Gun()
        {
            cout<<"Inside Gun";
        }
};

int main()
{
    Demo obj;
    
    cout<<sizeof(obj)<<"\n";

    return 0;
}