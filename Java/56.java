abstract class Airplane
{
    int nmb;
    abstract void Passenger(int n);
    abstract public String toString();
}
class B747 extends Airplane
{
    public void Passenger(int n)
    {
        System.out.println("Accomodation = "+n+" passengers");
    }
    public String toString()
    {
        return "Serial no.= 00IND_B747"+" Capacity is fair";
    }
}
class B757 extends Airplane
{
    public void Passenger(int n)
    {
        System.out.println("Accomodation = "+n+" passengers");
    }
    public String toString()
    {
        return "Serial no.= 00IND_B757"+" Capacity is average";
    }
}
class B767 extends Airplane
{
    public void Passenger(int n)
    {
        System.out.println("Accomodation = "+n+" passengers");
    }
    public String toString()
    {
        return "Serial no.= 00IND_B7467"+" Capacity is good";
    }
}
class ass36
{
    public static void main(String[] args) 
    {
        B747 a = new B747();
        B757 b = new B757();
        B767 c = new B767();
        a.Passenger(50);
        System.out.println(a);
        b.Passenger(100);
        System.out.println(b);
        c.Passenger(200);
        System.out.println(c);
    }
}