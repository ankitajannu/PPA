import java.io.*;

class ExceptionDemo7
{
    public static void main(String A[])
    {
        try 
        {
            BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

            System.out.println("Enter your name :");
            String name = bobj.readLine();

            System.out.println("Enter you age :");
            int Age = Integer.parseInt(bobj.readLine());

            System.out.println("Your name :" +name);
            System.out.println("Your age :"+Age);

        }
        catch(Exception obj)
        {}         
    }
}