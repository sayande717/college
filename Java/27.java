class apple
{
    void display()
    {
        System.out.println("Inside apple's display method.");
    }
}
class banana extends apple
{
    void display()
    {
        System.out.println("Inside banana's display method.");
    }
}
class cherry extends apple
{
    void display()
    {
        System.out.println("Inside cherry's display method.");
    }
}
class fruits
{
    public static void main(String[] args)
    {
        apple a = new apple();
        banana b = new banana();
        cherry c = new cherry();
        apple ref;
        ref = a;
        ref.display();
        ref = b;
        ref.display();
        ref = c;
        ref.display();
    }
}