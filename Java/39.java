interface K1
{
    int R = 1;
    void R();
}
interface K2 extends K1
{
    void R();
}
interface K3 extends K2
{
    void R();
}

public class U implements K3
{
    public void R()
    {
        System.out.println("Value of R is : "+R);
    }
    public static void main(String[] args) 
    {
        K1 r;
        U u1 = new U();
        r = u1;
        r.R();
    }
}