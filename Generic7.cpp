#include<iostream>
using namespace std;

template <class T>
class Array
{
    public:
        T *Arr;
        int Size;

        Array(int no)
        {
            Size = no;
            Arr = new T[Size];
        }

        ~Array()
        {
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the elements\n";
            int iCnt = 0;
            for(iCnt = 0; iCnt < Size; iCnt++)
            {
                cin>>Arr[iCnt];
            } 
        }

        void Display()
        {
            cout<<"Elements of the array are\n";
            int iCnt = 0;
            for(iCnt = 0; iCnt < Size; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }
};
int main()
{
    Array <int>aobj(5);
    aobj.Accept();
    aobj.Display();

    Array <char>aobj2(5);
    aobj2.Accept();
    aobj2.Display();

    return 0;
}