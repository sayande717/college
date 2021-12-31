interface LuminousObject
{
    String lightOff();
    String lightOn();
    void Display();
}
class SolidObject implements LuminousObject
{
    public String lightOff()
    {
        return "Light is off";
    }
    public String lightOn()
    {
        return "Light is on";
    }
    public void Display()
    {
        System.out.println(lightOff());
        System.out.println(lightOn());
    }
}
class Cone extends SolidObject
{
    String s1;
    Cone(String s)
    {
        s1 = s;
        System.out.println(s1);
    }
}
class LuminousCone extends Cone
{
    LuminousCone(String s)
    {
        super(s);
        System.out.println("In class LuminousCone");
    }
}
class Cube extends SolidObject
{
    String s1;
    Cube(String s)
    {
        s1 = s;
        System.out.println(s1);
    }
}
class LuminousCube extends Cube
{
    LuminousCube(String s)
    {
        super(s);
        System.out.println("In class LuminousCube");
    }
}
class ass52
{
    public static void main(String[] args) 
    {
        LuminousObject ref;
        LuminousCone cone = new LuminousCone("Subclass of class Cone");
        ref = cone;
        ref.Display();
        LuminousCube cube = new LuminousCube("Subclass of class cube");
        ref = cube;
        ref.Display();
    }
}