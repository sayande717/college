interface interfaceone
{
    public void method1();
}
interface interfacetwo
{
    public void method2();
}
class demo implements interfaceone, interfacetwo
{
    public void method1()
    {
        System.out.println("Text one.");
    }
    public void method2()
    {
        System.out.println("Text two.");
    }
}
class interfaceexample
{
    public static void main(String[] args) 
    {
        demo ob = new demo();
        ob.method1();
        ob.method2();
    }
}