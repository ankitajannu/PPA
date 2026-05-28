import java.util.*;
class Collections2
{
    public static void main(String A[])
    {
        Stack <String> sobj = new Stack<String>();

        sobj.push("C Programming");
        sobj.push("C++ Programming");
        sobj.push("Java Programming");
        sobj.push("Python Programming");

        System.out.println(sobj);

        String ret = sobj.pop();

        System.out.println(ret);

        System.out.println(sobj);
    }
}