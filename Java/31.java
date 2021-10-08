class S1
{
    int s1;
    S1(int s)
    {
        s1=s;
        System.out.println(("In class S1."));
        System.out.println("s1 = "+s1);
    }
}
class T1 extends S1
{
    int t1;
    T1(int t)
    {
        super(s);
        t1=t;
        System.out.println("In class T1.");
        System.out.println("t1 = ",+t1);
    }
}
class U1 extends T1
{
    int u1;
    U1(int u)
    {
        super(t);
        u1=u;
        System.out.println("In class U1.");
        System.out.println("u1 = ",+u1);
    }
}
class 31
{
    public static void main(String[] args) 
    {
        U1 ob = new U1();
        ob.s1;
    }
}