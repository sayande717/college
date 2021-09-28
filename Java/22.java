class sphere
{
    double radius;
    double x,y,z;
    sphere()
    {
        radius = 10.5;
        x=2.0;
        y=3.5;
        z=2.5;
    }
    sphere(double r, double xinput, double yinput, double zinput)
    {
        radius = r;
        x = xinput;
        y = yinput;
        z = zinput;
    }
    void Display1()
    {
        System.out.println("Using default contructor.");
        System.out.println("Radius of sphere : "+radius);
        System.out.println("X Coordinate : "+x);
        System.out.println("Y Coordinate : "+y);
        System.out.println("Z Coordinate : "+z);
    }
    void Display2()
    {
        System.out.println("Using argument constructor.");
        System.out.println("Radius of sphere : "+radius);
        System.out.println("X Coordinate : "+x);
        System.out.println("Y Coordinate : "+y);
        System.out.println("Z Coordinate : "+z);
    }
    public static void main(String[] args) 
    {
        sphere sp1 = new sphere();
        sphere sp2 = new sphere(20.5,3.5,4,5);
        sp1.Display1();
        sp2.Display2();
    }
}