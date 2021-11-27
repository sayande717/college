class displastno
{
    public static void main(String[] args) 
    {
        String s = "3,5,44,6,76";
        int i,count = 0;
        for(i=0;count!=4;i++)
        {
            if(s.charAt(i)==',')
            count++;
        }
        System.out.println("Last number is : "+s.substring(i,s.length()));
    }
}
