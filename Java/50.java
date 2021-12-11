class rock
{
    double mass;
}
class ass25
{
    public static void main(String[] args)
    {
        rock ob[] = new rock[10];
        double sum = 0;
        System.out.println("Masses : ");
        for(int i = 0;i < 10; i++)
        {
            ob[i] = new rock();
            ob[i].mass = 10*Math.random();
            System.out.println((i+1)+". "+ob[i].mass);
            sum = sum + ob[i].mass;
        }
        System.out.println("Total mass : "+sum);
    }
}