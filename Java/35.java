interface Shape2D
{
    double pi = 3.14;
    double getArea();
}
interface Shape3D
{
    double getVolume();
}
abstract class Shape implements Shape2D,Shape3D
{
    double r;
    Shape(double radius)
    {
        r = radius;
    }
    public double getArea()
    {
        return (pi*r*r);
    }
    public double getVolume()
    {
        return ((4/3)*pi*r*r*r);
    }
    abstract void Display();
}
class Circle extends Shape
{
    Circle(double r1)
    {
        super(r1);
    }
    public void Display()
    {
        System.out.println("\nArea of Circle : "+getArea());
    }
}
class Sphere extends Shape
{
    Sphere(double r1)
    {
        super(r1);
    }
    public void Display()
    {
        System.out.println("\nVolume of Sphere : "+getVolume());
    }
}
class ass43
{
    public static void main(String[] args)
    {
        Circle c = new Circle(5);
        Sphere s = new Sphere(10);
        Shape ref;
        ref = c;
        ref.Display();
        ref = s;
        ref.Display();
    }
}