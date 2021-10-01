interface interfacearea
{
    public float compute(float x, float y);
    final static float pi = 3.14f;
}
class rectangle implements interfacearea
{
    public float compute(float x, float y)
    {
        return x*y;
    }
}
class circle1 implements interfacearea
{
    public float compute(float x,float y)
    {
        return pi*x*x;
    }
}
class interfacetest
{
    public static void main(String[] args) 
    {
        interfacearea ref;
        rectangle rect1 = new rectangle();
        circle1 cir = new circle1();
        ref = rect1;
        System.out.println(("Area of rectangle = "+ref.compute(10,15)));
        ref = cir;
        System.out.println("Area of circle = "+ref.compute(10,0));
    }
}