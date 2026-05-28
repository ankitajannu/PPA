class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is running :" + Thread.currentThread().getName());
    }
}
class ThreadDemo4
{
    public static void main(String A[])
    {
        System.out.println("Inside main thread");

        Demo dobj = new Demo();
        Thread tobj = new Thread(dobj);
        tobj.setName("PPA");
        tobj.start();
    }
}