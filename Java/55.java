abstract class Jetplane
{
    String s;
    Jetplane(String s1)
    {
        s=s1;
    }
    abstract void numEngine();
}
class DC8 extends Jetplane
{
    DC8(String s2)
    {
        super(s2);
        System.out.println(s);
    }
    public void numEngine()
    {
        System.out.println("In class DC8");
    }
}
class DC10 extends Jetplane
{
    DC10(String s2)
    {
        super(s2);
        System.out.println(s);
    }
    public void numEngine()
    {
        System.out.println("In class DC10");
    }
}
class ass34
{
    public static void main(String[] args) 
    {
        DC8 a = new DC8("Seating capacity is fair");
        DC10 b = new DC10("Seating capacity is good");
        a.numEngine();
        b.numEngine();
    }
}