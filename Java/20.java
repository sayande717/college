class Triangle
{
    int base,height;
    double area;
    Triangle(int b,int h)
    {
        base = b;
        height = h;
    }
    Triangle (int a)
    {
        base=height=a;
    }
    int Area()
    {
        return (1/2)*base*height;
    }
    public static void main(String[] args) 
    {
        Triangle tr = new Triangle(10,12);
        int a = tr.Area();
        System.out.println("Area : "+a);
    }
}