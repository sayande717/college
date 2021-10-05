class wonderofobjects 
{
    void method1() 
    {
        System.out.println("Welcome to Java.");
    }

    void method2(String s) 
    {
        int i;
        for (i = 1; i <= 2; i++)
            System.out.println(s);
    }

    void method3(String s, int n) 
    {
        int counter;
        for (counter = 1; counter <= n; counter++)
            System.out.println(s);
    }

    public static void main(String[] args) 
    {
        wonderofobjects ob = new wonderofobjects();
        ob.method1();
        ob.method2("Welcome to Polymorphism.");
        ob.method3("Welcome to Overloading.", 3);
    }
}