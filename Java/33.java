abstract class Animal
{
public abstract void AnimalSound();
public void sleep()
{
    System.out.println("zzz");
}
} 
abstract class Figure
{
    double dim1;
    double dim2;
    Figure(double x1, double y1)
    {
        dim1 = x1;
        dim2 = y1;
    }
    public abstract void area();
}
class pig extends Animal
{
    public void AnimalSound ()
    {
        System.out.println("Wee Wee");
    }
}
class example
{
    public static void main(String[] args) 
    {
        pig mypig = new pig();
        mypig.AnimalSound();
        mypig.sleep();
    }
}