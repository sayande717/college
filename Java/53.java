class I2
{
    String getDescription()
    {
        return "I am in class I2";
    }
}
class J2 extends I2
{
    String getDescription()
    {
        System.out.println("I am in class J2");
        return super.getDescription();
    }
}
class K2 extends I2
{
    String getDescription()
    {
        System.out.println("I am in class I2");
        return super.getDescription();
    }
}
class ass32
{
    public static void main(String[] args) 
    {
        I2 a = new I2();
        J2 b = new J2();
        K2 c = new K2();
        I2 ref;
        ref=a;
        System.out.println(ref.getDescription());    
        ref=b;
        System.out.println(ref.getDescription());
        ref=c;
        System.out.println(ref.getDescription());
    }
}