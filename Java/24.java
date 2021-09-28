class Sphere
{
    double radius;
    double x, y, z;
    Sphere()
    {
        radius = 3.4;
        x = 1.2;
        y = 2.2;
        z = 3.2;
    }
    Sphere(double radius, double x, double y, double z) 
    {
        this.radius = radius;
        this.x = x;
        this.y = y;
        this.z = z;
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
        System.out.println("Radius of sphere is : " + radius);
        System.out.println("Coordinates of sphere are : " + x + " , " + y + " , " + z);
    }
}
class Application 
{
       public static void main(String[] args) 
    {
        Sphere ob1 = new Sphere();
        ob1.display();
        Sphere ob = new Sphere(10.2, 1.2, 2.3, 1.4);
        ob.display();
        double a1, a2;
        a1 = ob.findArea();
        a2 = ob.findVolume();
        System.out.println("Area : " + a1);
        System.out.println("Volume : " + a2);
    }
}