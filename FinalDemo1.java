final class Demo
{ 
    public int No1;
    public int No2;  
}

class Hello extends Demo    // Error
{

}

class FinalDemo1
{
    public static void main(String A[])
    {
        Demo obj = new Demo();
    }
}