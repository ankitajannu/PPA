class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is running with name :" + Thread.currentThread().getName());
        try
        {
            for(int = 0; i < 10; i++)
            {
                System.out.println(Thread.currentThread().getName());
                
            }
            Thread.sleep(1000);
        }
        catch(Exception obj){}
    }
}
class ThreadDemo7
{
    public static void main(String A[]) throws Exception
    {
        System.out.println("Inside main thread : "+Thread.currentThread().getName());

        Demo dobj1 = new Demo();
        Thread tobj1 = new Thread(dobj1);
        tobj1.setName("PPA");
        Demo dobj2 = new Demo();
        Thread tobj2 = new Thread(dobj2);
        tobj2.setName("LB");

        tobj1.start();
        tobj2.start();

        tobj1.join();
        tobj2.join();

        System.out.println("End of main thread...");
    }
}