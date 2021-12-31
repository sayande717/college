abstract class Bird
{
    String s,shape,desc,food;
    Bird(String s1)
    {
        s = s1;
    }
    abstract public String toString();
    abstract void shape(String s2);
}
class Pelicans extends Bird
{
    Pelicans(String s1)
    {
        super(s1);
        System.out.println(s);
    }
    public String toString()
    {
        return ("Description of Pelican : "+desc+", Food : "+food);
    }
    public void shape(String s2)
    {
        System.out.println(s2);
    }
}
class BrownBobby extends Bird
{
    BrownBobby(String s1)
    {
        super(s1);
    }
    public String toString()
    {
        return ("Description of BrownBobby : "+desc+", Food : "+food);
    }
    public void shape(String s2)
    {
        System.out.println("Shape : "+s2);
    }
}
class LittleBittern extends Bird
{
    LittleBittern(String s1)
    {
        super(s1);
    }
    public String toString()
    {
        return ("Description of LittleBittern : "+desc+", Food : "+food);
    }
    public void shape(String s2)
    {
        System.out.println("Shape : "+s2);
    }
}
class Shikra extends Bird
{
    Shikra(String s1)
    {
        super(s1);
    }
    public String toString()
    {
        return ("Description of Shikra : "+desc+", Food : "+food);
    }
    public void shape(String s2)
    {
        System.out.println("Shape : "+s2);
    }
}
class ass36
{
    public static void main(String[] args) 
    {
        Pelicans p = new Pelicans("This is a list of the bird species recorded in India. The avifuna of India includes around 1301 species, of which 42 are endemic, 1 has been introduced by humans, and 26 are rare or accidental.");
        p.shape("Small");
        p.food = "Fruit";
        p.desc = "Small";
        System.out.println(p);

        BrownBobby b = new BrownBobby("");
        b.shape("Medium");
        b.food = "Peanuts";
        b.desc = "Medium";
        System.out.println(b);

        LittleBittern l = new LittleBittern("");
        l.shape("Small");
        l.food = "Fruit";
        l.desc = "Small";
        System.out.println(l);

        Shikra s = new Shikra("");
        s.shape("Small");
        s.food = "Fruit";
        s.desc = "Small";
        System.out.println(s);
    }
}