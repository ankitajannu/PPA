class Demo
{
    public Demo()
    {
        System.out.println("Inside constructor");
    }

    protected void finalize()
    {
        System.out.println("Inside finalize method");
    }
}
class ObjectDemo3
{
    public static void main(String A[])
    {
        Demo obj = new Demo();
        obj = null;
        System.gc();
    }
}