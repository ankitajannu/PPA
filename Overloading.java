class Arithematic
{
    public int Addition(int A, int B)   // Addition@2ii
    {
        return A+B;
    }
    public int Addition(int A, int B, int C)  // Addition@3iii
    {
        return A+B+C;
    }
    public float Addition(float A, float B)   // Addition@2ff
    {
        return A+B;
    }
}

class Overloading
{
    public static void main(String A[])
    {
        Arithematic aobj = new Arithematic();
        System.out.println(aobj.Addition(10,11));
        System.out.println(aobj.Addition(10,11,21));
        System.out.println(aobj.Addition(10.5f,11.2f));
    }
}