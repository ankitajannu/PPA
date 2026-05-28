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

        // void Display(Demo *this, int X)     
        void Display(int X)
        {            
            cout<<"Value of No1 : "<<this->No1<<"\n";
            cout<<"Value of No2 : "<<this->No2<<"\n";
            cout<<"Value of X : "<<X<<"\n";
        }
};

int main()
{
    Demo obj(11,21);
    obj.Display(51);    // Display(&obj,11);    Display(100,51) 
 
    Demo objnew(10,20);
    objnew.Display(30);  // Diplay(&objnew,30);    Display(200,30);
    return 0;
}