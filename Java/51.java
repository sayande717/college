class ass26
{
    public static void main(String[] args) 
    {
        String s = "",s1 = "UNO",s2 = "dos",s3 = "tres",s4="quarto",s5 = "cinco";
        for(int i=0;i<args.length;i++)
        {
            s=args[i];
            if(s.equalsIgnoreCase("one"))
            System.out.println(s1);
            else if(s.equalsIgnoreCase("two"))
            System.out.println(s2);
            else if(s.equalsIgnoreCase("three"))
            System.out.println(s3);
            else if(s.equalsIgnoreCase("four"))
            System.out.println(s4);
            else if(s.equalsIgnoreCase("five"))
            System.out.println(s5);
            else System.out.println(s);
        }
    }
}