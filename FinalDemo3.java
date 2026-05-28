class Demo
{
    public int No1;
    final public int No2 = 21;     // const int No2 = 21;

    public Demo(int A, int B)
    {
        No1 = A;
        No2 = B;
    }
}

class FinalDemo3
{
    public static void main(String A[])
    {
        Demo dobj = new Demo(11,21);

        System.out.println("Value of No1 : "+dobj.No1);
        System.out.println("Value of No2 : "+dobj.No2);

        dobj.No1++;
        dobj.No2++;   // dobj.No2 = dobj.No2 + 1;   // Error
    }
}