class super
{
    int x;
    super(int x)
    {
        this.x=x;
    }
    void display()
    {
        System.out.println("The value of x is"+x);
    }
}
class sub extends super
{
int y;
sub(int x, int y)
{
super(x);
this.y=y;
}

    void display() 
    {
        System.out.println("The value of x " + x);
        System.out.println("The value of y" + y);
    }
}
class overriding 
{
public static void main (String args [])
{
    sub s1 = new sub (10,20);
    s1.display();
}