class S1
{
    int s1;
    S1(int s)
    {
        s1=s;
        System.out.println("S1 extended");
        System.out.println("Integer = "+s1);
    }
}
class T1 extends S1
{
    int t1;
    T1(int a, int b)
    {
        super(a);
        t1=b;
        System.out.println("T1 extended");
        System.out.println("Integer="+t1);
    }
}
class U1 extends T1
{
    int u1;
    U1(int a, int b, int c)
    {
        super(a,b);
        u1=c;
        System.out.println("U1 extended");
        System.out.println("Integer = "+u1);
    }
}
class ass33
{
    public static void main(String[] args) 
    {
        S1 x = new S1(10);
        T1 y = new T1(20,30);
        U1 z = new U1(40,50,60);
    }
}