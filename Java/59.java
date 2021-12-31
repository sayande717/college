abstract class Weight
{
    String colour;
    double mass;
    Weight(String c, double m)
    {
        colour = c;
        mass = m;
    }
    abstract void Display();
}
class WeightA extends Weight
{
    WeightA(String c, double m)
    {
        super(c, m);
    }
    public void Display()
    {
        System.out.println("Weight A : ");
        System.out.println("Colour : "+colour+"\nMass : "+mass);
    }
}
class WeightB extends Weight
{
    WeightB(String c, double m)
    {
        super(c, m);
    }
    public void Display()
    {
        System.out.println("\nWeight B : ");
        System.out.println("Colour : "+colour+"\nMass : "+mass);
    }
}
class WeightC extends Weight
{
    WeightC(String c, double m)
    {
        super(c, m);
    }
    public void Display()
    {
        System.out.println("\nWeight C : ");
        System.out.println("Colour : "+colour+"\nMass : "+mass);
    }
}
class WeightD extends Weight
{
    WeightD(String c, double m)
    {
        super(c, m);
    }
    public void Display()
    {
        System.out.println("\nWeight D : ");
        System.out.println("Colour : "+colour+"\nMass : "+mass);
    }
}
class ass41
{
    public static void main(String[] args) 
    {
        Weight w; double sum=0;
        Weight m[] = new Weight[6];
        m[0] = new WeightA("white", 4);
        w = m[0];
        sum+=w.mass;
        w.Display();
        m[1] = new WeightB("black", 1.5);
        w = m[1];
        sum+=w.mass;
        w.Display();
        m[2] = new WeightC("red", 1.4);
        w = m[2];
        sum+=w.mass;
        w.Display();
        m[3] = new WeightD("green", 7);
        w = m[3];
        sum+=w.mass;
        w.Display();
        m[4] = new WeightA("orange", 4);
        w = m[4];
        sum+=w.mass;
        w.Display();
        m[5] = new WeightB("violet", 1.5);
        w = m[5];
        sum+=w.mass;
        w.Display();
        System.out.println("Total mass : "+sum);
    }
}