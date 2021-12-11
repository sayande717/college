class sphere
{
    double radius,x,y,z;
    sphere(double r, double a, double b, double c)
    {
        radius = r;
        x = a;
        y = b;
        z = c;
    }
    void move(double a, double b, double c)
    {
        x = a;
        y = b;
        z = c;
    }
    void scale(double s)
    {
        radius = s*radius;
    }
    void display()
    {
        System.out.println("Coordinates : ");
        System.out.println("x : "+x);
        System.out.println("y : "+y);
        System.out.println("z : "+z);
    }
}
class ass23
{
    public static void main(String[] args) 
    {
        sphere ob = new sphere(4.5,5.6,6.7,7.8);
        ob.move(2.3, 3.4, 4.5);
        ob.scale(4.5);
        ob.display();    
    }
}