class divby17
{
    public static void main(String[] args)
    {
        int i=17;
        System.out.println("Numbers divisible by 17 (between 17 & 100) : ");
        while(i<=100)
        {
            if(i%17==0)
            System.out.println(i);
            i++;
        }
    }
}