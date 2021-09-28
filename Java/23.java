class box
{
    double w,h,d;
    box(double winput,double hinput, double dinput)
    {
        w = winput;
        h = hinput;
        d = dinput;
    }
    double volume()
    {
        return (w*h*d);
    }
    double surfacearea()
    {
        return 2*(w*h+h*d+w*d);
    }
    public static void main(String[] args) 
    {
        box b = new box (5.2,5.4,5.6);
        System.out.println("Volume of the box : "+b.volume());
        System.out.println("Surface area of the box : "+b.surfacearea());   
    }
}