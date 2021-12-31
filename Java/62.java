interface AntiLockBreakers
{
    String AntiLockBreakers();
}
interface CruiseControl
{
    String CruiseControl();
}
interface PowerSteering
{
    String PowerSteering();
}
abstract class Auto implements AntiLockBreakers,CruiseControl,PowerSteering
{
    public String AntiLockBreakers()
    {
        return "Anti-Lock Breakers is available";
    }
    public String CruiseControl()
    {
        return "Cruise Control is available";
    }
    public String PowerSteering()
    {
        return "Power Steering is available";
    }
    abstract void Display();
}
class Model1 extends Auto
{
    public void Display()
    {
        System.out.println("Model 1 :"+PowerSteering());
    }
}
class Model2 extends Auto
{
    public void Display()
    {
        System.out.println("Model 2 :"+AntiLockBreakers()+" and "+CruiseControl());
    }
}
class Model3 extends Auto
{
    public void Display()
    {
        System.out.println("Mode 3 : "+CruiseControl());
    }
}
class ass45
{
    public static void main(String[] args) 
    {
        Model1 m1 = new Model1();
        Model2 m2 = new Model2();
        Model3 m3 = new Model3();
        Auto ref;
        ref = m1;
        ref.Display();
        ref = m2;
        ref.Display();
        ref = m3;
        ref.Display();
    }
}