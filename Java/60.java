abstract class Fruit
{
    String colour;
    String name;
    Fruit(String n, String c)
    {
        name = n;
        colour = c;
    }
    abstract public String toString();
}
class Apple extends Fruit
{
    Apple(String n, String c)
    {
        super(n, c);
    }
    public String toString()
    {
        return ("Name of fruit : "+name+"\nColour : "+colour);
    }
}
class Orange extends Fruit
{
    Orange(String n, String c)
    {
        super(n, c);
    }
    public String toString()
    {
        return ("Name of fruit : "+name+"\nColour : "+colour);
    }
}
class Strawberry extends Fruit
{
    Strawberry(String n, String c)
    {
        super(n, c);
    }
    public String toString()
    {
        return ("Name of fruit : "+name+"\nColour : "+colour);
    }
}
class Banana extends Fruit
{
    Banana(String n, String c)
    {
        super(n, c);
    }
    public String toString()
    {
        return ("Name of fruit : "+name+"\nColour : "+colour);
    }
}
class ass42
{
    public static void main(String[] args) 
    {
        Apple a = new Apple("Apple","Red");
        Orange o = new Orange("Orange", "Orange");
        Strawberry s = new Strawberry("Strawberry", "Pink");
        Banana b = new Banana("Banana","Yellow");
        Fruit ref;
        ref = a;
        System.out.println(ref);
        ref = o;
        System.out.println(ref);
        ref = s;
        System.out.println(ref);
        ref = b;
        System.out.println(ref);
    }
}