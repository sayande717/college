interface Shape2D
{
    double pi = 3.14;
    double getArea(double r);
}
interface Shape3D
{
    //double pi = 3.14;
    double getVolume(double r);
}
abstract class Shape1 implements Shape2D,Shape3D
{
    public double getArea(double a1)
    {
        return (pi*a1*a1);
    }
    public double getVolume(double a2)
    {
        return ((4/3)*pi*a2*a2*a2);
    }
    abstract void Display(double ar);
}
class Circle2 extends Shape1
{
    public void Display(double ar)
    {
        System.out.println("Area is : "+ar);
    }
}
class Sphere2 extends Shape1
{
    public void Display(double vol)
    {
        System.out.println("Volume is : "+vol);
    }
}
class Assignment
{
    public static void main(String[] args)
    {
        double t1,t2;
        Shape3D r1;
        Shape2D r2;
        Sphere2 s = new Sphere2();
        Circle2 c = new Circle2();
        r1=s;
        r2=c;
        t1 = r1.getVolume(5.0);
        s.Display(t1);
        t2 = r2.getArea(3.0);
        c.Display(t2);
    }
}