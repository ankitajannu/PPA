#include<iostream>
using namespace std;

class Marvellous
{
    public:
        int No1;
        int No2;

        Marvellous()
        {
            cout<<"Inside default constructor\n";
            No1 = 0;
            No2 = 0;
        }
        Marvellous(int A, int B)
        {
            cout<<"Inside parametrised conmstructor";
            No1 = A;
            No2 = B;
        }
        ~Marvellous()
        {
            cout<<"Inside destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Fun\n";
        }
};

int main()
{
    Marvellous mobj1();
    Marvellous mobj2(11,21);
    
    return 0;
}