class S 
{
    int x = 100;

    S() 
    {
        System.out.println(x);
    }
}

class T extends S 
{
    String x = "Inside class T";

    T() 
    {
        System.out.println(x);
    }
}

class ass31
{
    public static void main(String[] args) 
    {
        S ob1 = new S();
        T ob2 = new T();
    }
}