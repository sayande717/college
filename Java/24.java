class Sphere
{
    double radius;
    Sphere(double r) 
    {
        radius = r;
    }
    double findArea() 
    {
        return (4 * 3.14 * radius * radius);
    }
    double findVolume()
    {
        return ((4 / 3) * 3.14 * radius * radius * radius);
    }
    void display() 
    {
        System.out.println("Surface Area : " + findArea());
        System.out.println("Volume : "+findVolume());
    }
}
class ass22
{
       public static void main(String[] args) 
    {
        Sphere ob = new Sphere(14.5);
        ob.display();
    }
}