import java.io.*;

class ExceptionDemo8
{
    public static void main(String A[]) throws IOException
    {
         
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter your name :");
        String name = bobj.readLine();

        System.out.println("Enter you age :");
        int Age = Integer.parseInt(bobj.readLine());

        System.out.println("Your name :" +name);
        System.out.println("Your age :"+Age);      
    }
}