interface I1
{
    void display1();
}
interface I2
{
    void display2();
}
interface I3 extends I1, I2
{
    void display3();
}
interface I4
{
    void display4();
}
class X implements I3
{
    public void display1()
    {
        System.out.println("Invoking interface I1");
    }
    public void display2()
    {
        System.out.println("Invoking interface I2");
    }
    public void display3()
    {
        System.out.println("Invoking interface I3");
    }
}
class W extends X implements I4
{
    public void display4()
    {
        display1();
        display2();
        display3();
        System.out.println("Invoking interface I4");
    }
}
class ass51
{
    public static void main(String[] args) 
    {
        W ob = new W();
        I4 ref;
        ref = ob;
        ref.display4();    
    }
}