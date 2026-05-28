abstract class Arithematic
{
    abstract public int Addition(int A, int B);       
    abstract public int Substraction(int A, int B);
    public int Multiplication(int A, int B)
    {
        return A * B;
    }
}

class Marvellous extends Arithematic
{ 
    public int Addition(int A, int B)
    {
       return A+B;
    }
    public int Substraction(int A, int B)
    {
       return A-B;
    }
}

class AbstractDemo
{
    public static void main(String A[])
    {
        Marvellous mobj = new Marvellous();

        System.out.println(mobj.Addition(11,10));
        System.out.println(mobj.Substraction(11,10));
        System.out.println(mobj.Multiplication(11,10));
    }
}