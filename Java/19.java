class Shape
{
    double length, breadth;
    Shape (double l, double b)
    {
        length = l;
        breadth = b;
    }
    double area()
    {
        return length*breadth;
    }
    double perimeter()
    {
        return 2*(length+breadth);
    }
}
class Rectangle :public Shape
{
    public static void main(String[] args)
    {
        Shape r1 = new Shape(20.5,30.0);
        Shape r2 = new Shape(40.5,50.5);
        System.out.println("Rectangle 1 - Area : "+r1.area()+" Perimeter : "+r1.perimeter());
        System.out.println("Rectangle 2 - Area : "+r2.area()+" Perimeter : "+r2.perimeter());   
    }
}